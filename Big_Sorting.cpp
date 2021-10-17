
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for (int unsorted_i = 0; unsorted_i < n; unsorted_i++)
    {
        cin >> unsorted[unsorted_i];
    }

    sort(unsorted.begin(), unsorted.end(), [](const string &a, const string &b)
         {
             if (a.length() != b.length())
             {
                 return a.length() < b.length();
             }
             return a < b;
         });

    for (auto x : unsorted)
        cout << x << endl;

    return 0;
}