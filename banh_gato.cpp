#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin >> n;
	for (int i = 0 ; i < n ; i++){
		int x;
		cin >> x;
		double sum = 0;
		for (int j = 0 ; j < x ; j++){
			float a, b;
			cin >> a >> b;
			sum += (a*1.0/b); 
		}
		if (sum == 1) cout << "YES\n";
		else cout << "NO\n";
	}
}

