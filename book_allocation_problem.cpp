#include<bits/stdc++.h>
using namespace std;
bool possible(int *book,int n,int m,int mid){
	int curr_stu = 1;
	int pages_count = 0;
	for(int i=0;i<n;i++){
			if(pages_count + book[i] > mid){
				curr_stu++;
				pages_count=book[i];
				if(curr_stu > m)
				 return false;
			}
			else{
				pages_count += book[i];
			}
	}
	return true;

}
int alloc(int *book,int n,int m,int total){
	int ans = INT_MAX;
	int s = book[n-1];
	int e = total;
	while(s<=e){
		int mid = (s+e)/2;
		if(possible(book,n,m,mid)){
			ans = min(ans,mid);
			e = mid - 1;
		}
		else{
			s=mid+1;
		}
}
	return ans;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int book[n];
		int total = 0;
		for(int i=0;i<n;i++){
          cin>>book[i];
		  total+= book[i];
		}
		cout<<alloc(book,n,m,total)<<endl;
	}
	return 0;
}
