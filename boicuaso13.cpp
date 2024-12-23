#include <bits/stdc++.h>
using namespace std;
main(){
	int x,y;
	cin>>x>>y;
	int a=min(x,y);
	int b=max(x,y);
	int fist=0;
	for (int i=a;i<=b;i++){
		if (i%13==0){
			fist=i;
			break;
		} 
	}
	int sum=0;
	int c=fist/13;
	while (c*13<=b){
		sum+=c*13;
		c++;
	}
	int result = ((b - a + 1) * (b + a)) / 2 - sum;
	cout<<result<<endl; 
}	
