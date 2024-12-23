#include <bits/stdc++.h>
#include <cmath>
struct doan{
	int a;
	int b;
};
void input(doan &d){
	scanf ("%d", &d.a);
	scanf ("%d", &d.b);
}
//bool prime[1000001];
//void screening(){
//	for (int i=0;i<=1000000;i++){
//		prime[i]=true;
//	}
//	prime[0]=prime[1]=false;
//	for (int i=0;i<=1000000;i++){
//		if (prime[i]){
//			for (int j=i*i;j<=1000000;j+=i){
//				prime[j]=false;
//			}
//		}
//	}
//}
bool prime(int n){
	if (n==0||n==1) return false;
	else{
		for (int i=2;i<=sqrt(n); i++){
			if (n%i==0){
				return false;
			}
		}
	}
	return true;
}
using namespace std;
main(){
	int n;
	cin>>n;
	doan d[n];
	screening();
	for (int i=0;i<n;i++){
		input(d[i]);
	}
	for (int i=0;i<n;i++){
		if (d[i].a)
	}
}
