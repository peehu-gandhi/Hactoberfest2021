//* Don't Burn Your Opportunities just for Temporary Happiness
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

//*Form a queue using stacks (don't implement queue i.e. queue<int>q)
//First Method using two stacks

class que{
    stack<int>st1;
    stack<int>st2;
    public:
    void push(int val){
        st1.push(val);
    }

    int pop(){
        if (st1.empty() && st2.empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
        }
        int topval = st2.top();
        st2.pop();
        return topval;
    }

    bool isempty(){
        if (st1.empty() && st2.empty())
        {
            return true;
        }
        return false;
    }
};


//Second Method using only 1 stack and recursive stack
class que1{
    stack<int>st1;
    public:
    void push(int val){
        st1.push(val);
    }

    int pop(){
        if (st1.empty())
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int topval = st1.top();
        st1.pop();
        if (st1.empty())
        {
            return topval;
        }
        int item = pop();
        st1.push(item);
        return item;
    }

    bool isempty(){
        if (st1.empty())
        {
            return true;
        }
        return false;
    }
};

int main(){
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    cout<<q.pop()<<endl;
    que q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    cout<<q1.pop()<<endl;
    return 0;
}