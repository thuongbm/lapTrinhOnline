#include <bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	for (int i=0;i<n;i++){
		string t;
		float a;
		cin>>t>>a;
		vector <float> v;
		for (int i=0;i<7;i++){
			float temp;
			cin>>temp;
			v.push_back(temp);
		}
		v.erase(max_element(v.begin(), v.end()));
		v.erase(min_element(v.begin(), v.end()));
		float sum=accumulate(v.begin(), v.end(), 0.0f);
//		for (auto &x: v) cout<<x<<' ';
//		cout<<endl;
		float score=sum*a;
		cout<<t<<' '<<fixed<<setprecision(2)<<score<<endl;
	}
}
