#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int res (const vector <int> &v,int n, int m){
	vector <int> dp(m + 1, INT_MAX);
	dp[0] = 0;
	for (int i = 0; i < n; i++){
		for (int j = v[i]; j <= m ; j++){
			if (dp[j - v[i]] != INT_MAX){
				dp[j] = min(dp[j], dp[j - v[i]] + 1);
			}
		}
	}
	if (dp[m] == INT_MAX) return -1;
	else return dp[m];
}
main(){
	int n, m;
	cin >> n >> m;
	vector <int> v;
	int x;
	for ( int i= 0 ; i < n; i++){
		cin >> x;
		v.push_back(x);
	}

	cout << res(v, n, m);
}


