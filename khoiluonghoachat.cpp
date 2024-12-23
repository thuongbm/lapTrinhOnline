#include <bits/stdc++.h>
using namespace std;
using ll = long long;
map <char, int> kl = {{'(', 0}, {'C', 12}, {'H', 1}, {'O', 16}};
void sol(){
	string x;
	cin >> x;
	stack <int> s;
	for (char c : x){
		if (kl.find(c) != kl.end()){
			s.push(kl[c]);
		}
		else if (c == ')'){
			int t =0;
			while (s.top() != 0){
				t += s.top();
				s.pop();
			}
			s.top() = t;
		}
		else s.top() *= c - '0';
		int res = 0;
		while (s.size() != 0){
			res += s.top();
			s.pop();
		}
		cout << res << '\n';
	}
}
main(){
	int t;
	cin >> t;
	while (t--){
		sol();
	}
}


