#include<bits/stdc++.h>
using namespace std;

/*int main()
{
    int n;
    cin>>n;
    string s=to_string(n);
    cout<<s.size();
}*/

/*int main()
{
    int n,c=0;
    cin>>n;
    while(n!=0)
    {
        n/=10;
        ++c;
    }
    cout<<c;
}*/

int main()
{
    int n;
    cin>>n;
    int b=floor(log10(n) + 1);
    cout<<b;
}
