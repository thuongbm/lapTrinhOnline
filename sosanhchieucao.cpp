#include <iostream>
using namespace std;
main(){
	int n,m;
	string x,y;
	cin>>x;

	cin>>n;
	fflush(stdin);
	cin>>y;
	cin>>m;
	if (n==m) cout<<x<<" cao bang "<<y;
	if (n>m) cout<<x<<" cao hon "<<y;
	if (m>n) cout<<y<<" cao hon "<<x;
}
