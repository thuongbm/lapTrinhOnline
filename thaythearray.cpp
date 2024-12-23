#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	vector <int> v;
	for (int i=0;i<10;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	for (int i=0;i<10;i++){
		if (v[i]<=0){
			v[i]=1;
		}
	}
	for (int i=0;i<10;i++){
		cout<<"X["<<i<<"]"<<' '<<'='<<' '<<v[i]<<endl;
	}
}
