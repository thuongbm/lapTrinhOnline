#include <iostream>
#include <math.h>
using namespace std;
main(){
	long long n;
	cin>>n;
	for (long long i=1;i<=n;i++){
		if (i%2==0){
			cout<<i<<" ^ 2 = "<<i*i<<endl;
		}
	}
}
