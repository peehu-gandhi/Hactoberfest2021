#include<bits/stdc++.h>
using namespace std;
 
void bfs(int n, int m, int num)
{
    // Queue will contain all the stepping Numbers
    queue<int> q;
 
    q.push(num);
 
    while (!q.empty())
    {
        int stepNum = q.front();
        q.pop();
        if (stepNum <= m && stepNum >= n)
            cout << stepNum << " ";
 
        // If Stepping Number is 0 or greater than m,
        // no need to explore the neighbors
        if (num == 0 || stepNum > m)
            continue;
        int lastDigit = stepNum % 10;
 
        // There can be 2 cases either digit to be
        // appended is lastDigit + 1 or lastDigit - 1
        int stepNumA = stepNum * 10 + (lastDigit- 1);
        int stepNumB = stepNum * 10 + (lastDigit + 1);
        if (lastDigit == 0)
            q.push(stepNumB);
        else if (lastDigit == 9)
            q.push(stepNumA);
 
        else
        {
            q.push(stepNumA);
            q.push(stepNumB);
        }
    }
}
void displaySteppingNumbers(int n, int m)
{
    for (int i = 0 ; i <= 9 ; i++)
        bfs(n, m, i);
}
int main()
{
    int n , m ;
  cout<<"Enter Two numbers:"<<endl;
  cin>>n>>m;
    displaySteppingNumbers(n,m);
 
    return 0;
}
