#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int binary_search(int a[], int n, int x){
	int l = 1, r = n;
	while(l <= r){
		int m = ( l + r ) / 2;
		if ( a[m] == x ){
			return m;
		}
		else if ( a[m] < x){
			l = m + 1;
		}
		else{
			r = m -1;
		}
	}
	return -1;
}
main(){
	int n;
	cin >> n;
	for (int i = 0 ; i < n ; i++){
		int k, x;
		cin >> k >> x;
		int a[k];
		for ( int j = 1 ; j <= k ; j++){
			cin >> a[j];
		}
		int res = binary_search(a, k, x);
		if (res >= 0) cout << res  << endl;
		else cout << "NO" << endl;
	}
}


