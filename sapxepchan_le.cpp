#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	int n;
	cin >> n;
	vector <int> a,b;
	int x;
	for (int i = 0 ; i < n ; i++){
		cin >> x;
		if ( x % 2 == 0){
			a.push_back(x);
		}
		else b.push_back(x);
	}
	for (auto e : b){
		cout << e << ' ';
	}
	reverse (a.begin(), a.end());
	for (auto e : a){
		cout << e << ' ';
	}

}


