#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	while (n>0){
		if (n==999){
			cout<<"CMXCIX";
			break;
		}
		if (1000>n&&n>=500){
			cout<<'D';
			n-=500;
		}
		if (n<500&&n>=100){
			cout<<'C';
			n-=100;
		}
		if (n>=50&&n<100){
			cout<<'L';
			n-=50;
		}
		if (n>=10&&n<50){
			cout<<'X';
			n-=10;
		}
		if (n>=5&&n<10){
			cout<<'V';
			n-=5;
		}
		if (n>=1&&n<5){
			cout<<'I';
			n-=1;
		}
	}
}
