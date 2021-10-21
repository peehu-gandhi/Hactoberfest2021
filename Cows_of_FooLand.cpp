#include<bits/stdc++.h>
using namespace std;
class Solution{
		public:
	void multiply(vector<vector<long long int>> &a, vector<vector<long long int>> &b) {
    vector<vector<long long int>> c(2, vector<long long int>(2, 0));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int l=0;l<2;l++)(c[i][j]+=a[i][l]*b[l][j])%=((int)1e9 + 7);
        }
    }
    a = c;
}
	int TotalAnimal(long long int n){
	   vector<vector<long long int>> ans(2, vector<long long int>(2, 1)), d(2, vector<long long int>(2, 1));
    d[1][1] = ans[0][1] = ans[1][0] = 0;
    while (n > 0) {
        if (n & 1)multiply(ans, d);
        multiply(d, d);
        n >>= 1;
    }
    return ans[0][0];  // Code here
	}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		long long int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalAnimal(N);
		cout << ans << "\n";
	}
	return 0;
