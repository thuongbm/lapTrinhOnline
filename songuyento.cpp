#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool prime(ll n){
	if (n==1||n==0) return false;
	else{
		for (int i=2;i<sqrt(n);i++){
			if (n%i==0){
				return false;
			} 
		}
	}
	return true; 
}
main(){
	ll n;
	cin>>n;
	if (prime(n)) cout<<"YES";
	else cout<<"NO";
}
