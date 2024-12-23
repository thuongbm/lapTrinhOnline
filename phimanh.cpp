#include <bits/stdc++.h>
using namespace std;
main (){
	float a,b;
	cin>>a>>b;
	if (a==0&&b==0) cout<<"0.00%";
	cout<<fixed<<setprecision(2)<<((b-a)/a)*100<<"%";
}
