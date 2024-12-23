#include <bits/stdc++.h>
//brain storm cua thay tich
using namespace std;
using ll = long long;
ll m = 1e9 + 7, n = 1e9 + 7;
ll mypow (ll a, ll b){
	if (b == 0) return 1;
	if (b % 2 == 0) return mypow(a * a % m, b / 2);
	return ((mypow( a * a % m, b / 2) % m) * (a % m)) % m; 
}
int main(){
	string x, y;
	cin >> x >> y;
	ll a = 0, b = 0;
	for (char z : x){
		a = (a * 10 + (z - '0')) % m;
	}
	for (char z : y){
		b = (b * 10 + (z - '0')) % (m - 1);
	}
	cout << mypow(a, b);
	return 0;
}


