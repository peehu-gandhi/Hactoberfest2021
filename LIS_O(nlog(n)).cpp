#include <bits/stdc++.h>
using namespace std;

int longestIncreasingSubsequence(vector<int>arr, int n)
{
    vector<int>dp(n);
    dp[0] = arr[0];
    int l = 1;
    for(int i=1;i<n;i++){
        if(arr[i] < dp[0]){
            dp[0] = arr[i];
        }
        else if(arr[i] > dp[l-1]){
            dp[l++] = arr[i];
        }
        else{
            int idx = lower_bound(dp.begin(), dp.begin()+l, arr[i]) - dp.begin();
            dp[idx] = arr[i];
        }
    }
    return l;   
}
int main() {
    int n;
    cin >>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >>arr[i];
    }
    cout <<"Longest Increasing Subseq is of length" <<longestIncreasingSubsequence(arr, n);
}
