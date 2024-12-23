#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	int n;
	cin >> n;
	vector <int> a, b, c;
	int x;
	for (int i = 0; i < n; i++){
		cin >> x;
		if (x % 3 == 0) a.push_back(x);
		else if (x % 3 == 1) b.push_back(x);
		else if (x % 3 == 2) c.push_back(x);
	}
	sort (a.begin(), a.end());
	sort (b.begin(), b.end());
	sort (c.begin(), c.end());
	for (auto e : a){
		cout << e << ' ';
	}
	for (auto e : b){
		cout << e << ' ';
	}
	for (auto e : c){
		cout << e << ' ';
	}
}


