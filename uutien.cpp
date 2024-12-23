#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int a[8];
bool cmp(int a, int b){
	return a>b;
}
main(){
	int n;
	cin>>n;
	int b[n];
	for (int i=0;i<n;i++){
		cin>>b[i];
		a[b[i]]++;
	}
	for (int i=0;i<5;i++){
		for (int j=1;j<6;j++){
			if (a[b[i]]<a[b[i]+1]){
				int temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
	for (int i=0;i<n;i++){
		cout<<b[i];
	}
}
