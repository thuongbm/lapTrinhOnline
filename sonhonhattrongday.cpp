#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	cout<<endl;
	int a[n];
	int min=INT_MAX;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<min) min=a[i];
	}
	int *it=lower_bound(a,a+n, min);
	cout<<"Menor valor: "<<*it<<endl;
	cout<<"Posicao: "<<it-a;
}
