#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
	if (n==0||n==1) return false;
	else{
		for (int i=2;i<=sqrt(n); i++){
			if (n%i==0){
				return false;
			}
		}
	}
	return true;
}
vector<int> createRange(int a, int b) {
    int size = b - a + 1;
    vector<int> range(size);
    iota(range.begin(), range.end(), a);
    return range;
}
main(){
	int n;
	cin>>n;
	int i=0;
	vector <int> v(n);
	while (i<n){
		int j=0;
		int a,b;
		cin>>a>>b;
		v[i] = createRange(a, b);
		if (v.begin()+)
		i++;
	}
}
