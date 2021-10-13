// Name: JHALA DEVRAJSINH SHRIPALSINH
// Date: 02/07/2021
// Purpose: Encapsulation in C++
// Encapsulation: 
// Hiding "sensitive" data

#include<bits/stdc++.h>
using namespace std;

class A
{
    public:
    int a;
    void funcA(){
        cout << "funcA" << endl;
    }

    private:
    int b;
    void funcB(){
        cout << "funcB" << endl;
    }

    protected:
    int c;
    void funcC(){
        cout << "funcC" << endl;
    }
};

int main()
{

    A obj;
    obj.funcA();
    //obj.funcB(); // because it is private

    return 0;
}