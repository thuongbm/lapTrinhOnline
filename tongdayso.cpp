#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mod = 1000000007;
main(){
	ll sum = 0;
	ll num;
	while (cin >> num){
		sum += num;
		sum %= mod;
	}
	cout << (sum + mod) % mod;
}


