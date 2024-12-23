#include <bits/stdc++.h>
using namespace std;
main(){
	int max=INT_MIN;
	int a[100];
	for (int i=0;i<100;i++){
		cin>>a[i];
		if (a[i]>max) max=a[i];
	}
	for (int i=0;i<100;i++){
		if (a[i]==max){
			cout<<a[i]<<endl;
			cout<<i+1<<endl;
			break;
		}
	}
}
