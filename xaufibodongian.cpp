#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll lenght(int n){
	if ( n == 1 ) return 1;
	if ( n == 2 ) return 1; 
	ll fn, f1 = 1, f2 = 1;
	for (int i = 3 ; i <= n ; i++){
		fn = f1 + f2;
		f1 = f2;
		f2 = fn; 
	}
	return fn;
}
char find(int n, ll b){
	if ( n == 1 ) return 'A';
	if ( n == 2 ) return 'B';
	ll f1 = lenght(n - 2);
	ll f2 = lenght(n - 1);
	while (n > 2){
		if ( b <= f1 ){
			n -= 2;
		}
		else {
			b -= f1;
			n -= 1;
		}
		f1 = lenght(n - 2);
		f2 = lenght(n - 1);
	}
	return (n == 1) ? 'A' : 'B';
	
}
main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >> n;
	ll a, b;
	for (int i = 0 ; i < n ; i++){
		cin >> a >> b;
		ll x = lenght(a);
		if ( b > 0 && b <= x){
			char y = find(a, b);
			cout << y << endl;	
		}
	}
}


