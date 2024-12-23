#include <bits/stdc++.h>
using namespace std;
int max(int a, int b){
	return (a>b)?a:b;
}
main(){
	int a,b,c;
	cin>>a>>b>>c;
	cout<<"Max = "<<max(a,(max(b,c)));
}
