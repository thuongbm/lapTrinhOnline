#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll Min = 10000000007;
main(){
	int n; cin >> n;
	ll a[n];
	ll u[n];
	map <ll, int> m;
	for (int i = 0 ; i < n ; i++){
		cin >> a[i];
		m[a[i]]++;
		Min = min(Min, a[i]);
		u[i] = Min;
	}
	for (int i = 0 ; i < n ; i++){
		cout << u[i] << ' ' << m[u[i]] << ' ' << *find(a, a+n, u[i]) << endl;
	}
}


