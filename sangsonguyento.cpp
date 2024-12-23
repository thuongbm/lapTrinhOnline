//#include <iostream>
//using namespace std;
//bool prime[500001];
//void screening(){
//	for (int i=0;i<=500000;i++){
//		prime[i]=true;
//	}
//	prime[0]=prime[1]=false;
//	for (int i=0;i<=500000;i++){
//		if (prime[i]){
//			for (int j=i*i;j<=500000;j+=i){
//				prime[j]=false;
//			}
//		}
//	}
//}
//main(){
//	int n;
//	cin>>n;
//	screening();
//	for (int i=0;i<=n;i++){
//		if (prime[i]){
//			cout<<i<<endl;
//		}
//	}
//}
#include <iostream>
#include <cmath> 
using namespace std;
bool prime(int n){
	if (n==0&&n==1) return false;
	else{
		for (int i=2;i<=sqrt(n); i++){
			if (n%i==0){
				return false;
			}
		}
	}
	return true;
}
main(){
	int n;
	cin>>n;
	for (int i=2;i<=n;i++){
		if (prime(i)) cout<<i<<endl;
	}
}
