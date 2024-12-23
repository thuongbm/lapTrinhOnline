#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main(){
	int n, k;
	cin >> n >> k;
	vector <int> a(n+3);
	list <int> l;
	for (int i = 0 ; i < n ; i ++){
		cin >> a[i];
	}
	for (int i = 0 ; i < k - 1 ; i++){
		while (l.size() > 0 && a[l.back()] < a[i]) l.pop_back();
		l.push_back(i);
	}
	for (int i = k - 1 ; i < n ; i++){
		while (l.size() > 0 && a[l.back()] < a[i]) l.pop_back();
		l.push_back(i);
		while (i - l.front() >= k){
			l.pop_front();
		}
		cout << a[l.front()] << ' ';
	}
}


