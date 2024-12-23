#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int a[n];
	int two=0, three=0, four=0, five=0;
	for (int i=0;i<n;i++){
		cin>>a[i];
		if (a[i]%2==0) two++;
		if (a[i]%3==0) three++;
		if (a[i]%4==0) four++;
		if (a[i]%5==0) five++;
	}
	cout<<two<<" Multiplo(s) de 2"<<endl;
	cout<<three<<" Multiplo(s) de 3"<<endl;
	cout<<four<<" Multiplo(s) de 4"<<endl;
	cout<<five<<" Multiplo(s) de 5"<<endl;
}
