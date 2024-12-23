#include <bits/stdc++.h>
using namespace std;
int min(int a, int b){
	return (a<b)?a:b;
}
int max(int a, int b){
	return (a>b)?a:b;
}
main(){
	while (1){
		int a,b;
		cin>>a>>b;
		if (a<=0||b<=0){
			break;
		}
		else{
			int sum=0;
			for (int i=min(a,b);i<=max(a,b);i++){
				cout<<i<<' ';
				sum+=i;
			}
			cout<<"Tong="<<sum;
		}
	}
}
