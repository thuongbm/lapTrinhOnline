#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	ll res = 0 , cnt = 1;
	while(cnt < n){
		cnt *= 2;
		res ++;
	}
	cout << res <<endl;
}


