#include <bits/stdc++.h>
using namespace std;
main(){
	while (1){
		int a,b;
		cin>>a>>b;
		if (a!=b){
			if( a>b) cout<<"Decrescente"<<endl;
			if (a<b) cout<<"Crescente"<<endl;
		}
		else break;	
	}
}
