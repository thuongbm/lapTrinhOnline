#include <bits/stdc++.h>
using namespace std;
using ll= long long;
bool tang(vector <int> v,int n){
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++){
			if (v[i]>v[j]){
				return false;
			}
		}
	}
	return true;
}
main(){
	int n;
	cin>>n;
	vector <int> v(n);
	for (int i=0;i<n;i++){
		cin>>v[i];
	}
	if (tang(v,n)) cout<<"YES";
	else cout<<"NO";
}
