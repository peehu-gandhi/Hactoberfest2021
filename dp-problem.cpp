#include <iostream>
#include <bits/stdc++.h>

#define int long long

using namespace std;

int solve(int arr[],int n,int k){
	int dp[n+1][1024];
	memset(dp,0,sizeof(dp));
	
	dp[0][0]=1;
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<1024;j++){
			dp[i][j]=(dp[i-1][j] | dp[i-1][j^arr[i-1]]); 
		}
	}
	
	int ans=0;
	for(int i=0;i<=1023;i++){
		if(dp[n][i]){
			ans=max(ans,k^i);
		}
	}
	
	return ans;
}

int32_t main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		cout<<solve(arr,n,k)<<endl;
		
	}
	return 0;
}
