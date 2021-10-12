//Nikita12200
//program to find unique number in array
//approach is XOR of same numbers is 0
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int no, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> no;
        ans = ans ^ no;
    }
    cout << ans << endl;
    return 0;
}