#include "bits/stdc++.h"
using namespace std;
using ll=long long;
//int fibo(long long n){
//   if(n == 0 || n == 1){
//      return 1;
//   }
//   long long fn1 = 1, fn2 = 0, fn;
//   for(int i = 2; i <= 92; i++){
//      fn = fn1 + fn2;
//      if(fn == n){
//         return 1;
//      }
//      fn2 = fn1;
//      fn1 = fn;
//   }
//   return 0;
//}
void fibo(ll n){
	int f1=1, f2=0, fn;
	for (int i=0;i<n;i++){
		if (i==0||i==1) cout<<i<<' ';
		else{
			fn=f1+f2;
			cout<<fn<<' ';
			f2=f1;
			f1=fn;
		}
	}
}
main(){
	ll n;
	cin>>n;
	fibo(n);
}
