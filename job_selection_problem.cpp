#include <bits/stdc++.h> 
using namespace std;

bool myCmp(pair <int, int> a, pair <int, int> b)
{
    return a.second > b.second;
}

int jsp(pair <int, int> arr[], int n)
{
	sort(arr, arr + n, myCmp);

	int deadline[n];
	for(int i = 0; i < n; i++)
	    deadline[i]= arr[i].first;

    int m= *max_element(deadline, deadline+n);
    int res[m]={0};

	for(int i = 0; i < n; i++)
	{
	    for(int j= arr[i].first-1; j>=0; j--)
	    {
	        if(res[j]==0)
	        {
	            res[j]=arr[i].second;
	            break;
	        }
	    }
	}

	int ans=0;
	for(int i = 0; i < m; i++)
	{
	    ans+=res[i];
	}

    return ans;
 } 
