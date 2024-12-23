#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int dem=0;
	while ((dem)<6){
		if (n%2!=0){
			cout<<n<<endl;
			dem++;
		} 
		n++;
	}
}
