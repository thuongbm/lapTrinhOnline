#include <bits/stdc++.h>
using namespace std;
main(){
    int n;
    cin >> n;
    vector <int> v(n);
    for (int &x : v) cin >> x;
    sort (v.begin(), v.end());
    int cnt = 1;
    for (int i = 1; i < v.size(); i++){
        if (v[i] != v[i-1]) cnt++;
    }
    cout << cnt;
}
