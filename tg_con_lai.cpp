#include <iostream>
using namespace std;
using ll = long long;
int main(){
	int a, b;
	cin >> a >> b;
	int c = a + b;
	if ((a + b) <= 24) cout << c;
	else{
		cout << c - 24;
	}
	return 0;
}


