#include<iostream>
using namespace std;
int main(){
  long long a, b, c;
  cin>>a>>b>>c;
  if (a+b>c&&b+c>a&&a+c>b){
  	if (a==b && b==c) cout<<"Valido-Equilatero"<<endl;
	else if(a==b || a==c || b==c) cout<<"Valido-Isoceles"<<endl;
    else if (a+b>c&&b+c>a&&a+c>b) cout<<"Valido-Escaleno"<<endl;
    if( a*a==b*b+c*c || b*b==a*a+c*c || c*c== a*a+b*b) cout<<"Retangulo: S";
    else cout<<"Retangulo: N";
  }
  else cout<<"Invalido"<<endl;
}
