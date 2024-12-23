#include <bits/stdc++.h>
using namespace std;
using ll=long long;
main(){
	int n;
	cin>>n;
	ll tich=1;
	for (int i=0;i<n;i++){
		tich*=(i+1);
	}
	cout<<tich;
}
