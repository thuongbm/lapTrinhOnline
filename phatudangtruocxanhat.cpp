#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
	int n;
	cin >> n;
	vector <int> v(n);
	for (int i = 0 ; i < n ; i++){
		cin >> v[i];
	}
	if (n == 1) cout << 0;
	cout << abs(v[1] - v[0]) <<  ' ';
	int current_max = max(v[0], v[1]);
    int current_min = min(v[0], v[1]);
    for (int i = 2; i < n; i++) {
        current_max = max(current_max, v[i]);
        current_min = min(current_min, v[i]);
        cout << max(current_max - v[i], v[i] - current_min) << ' ';
    }
	return 0;
}


