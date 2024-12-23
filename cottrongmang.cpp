#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	char x;
	cin>>x;
	float a[12][12];
	for (int i=0;i<12;i++){
		for (int j=0;j<12;j++){
			cin>>a[i][j];
		}
	}
	float sum=0;
	float k=0;
	for (int i=0;i<12;i++){
		sum+=a[i][n];
		k++;
	}
	if (x=='S') cout<<fixed<<setprecision(1)<<sum<<endl;
	if (x=='M') cout<<fixed<<setprecision(1)<<(sum/k)<<endl;
}
