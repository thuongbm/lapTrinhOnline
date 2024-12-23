//#include <bits/stdc++.h>
//using namespace std;
//main(){
//	int n,s,b,a,x,y,z,ss=0, sb=0, sa=0, sx=0, sy=0,sz=0;
//	string name;
//	cin>>n;
//	for (int i=0;i<n;i++){
//		cin>>name;
//		cin>>s>>b>>a;
//		cin>>x>>y>>z;
//		ss+=s;
//		sa+=a;
//		sb+=b;
//		sx+=x;
//		sy+=y;
//		sz+=z;
//	}
//	if (ss!=0){
//		double percentage = sx * 100.0 / ss;
//		stringstream ss;
//	    ss << fixed << setprecision(2) << percentage;
//	    string result = ss.str();
//	    replace(result.begin(), result.end(), '.', ',');
//		cout <<"Service: "<< result << "%" << endl;
//	}
//	if (sa!=0){
//		double percentage = sy * 100.0 / sa;
//		stringstream sa;
//	    sa << fixed << setprecision(2) << percentage;
//	    string result = sa.str();
//	    replace(result.begin(), result.end(), '.', ',');
//		cout <<"Block: "<< result << "%" << endl;
//	}
//	if (sb!=0){
//		double percentage = sz * 100.0 / sb;
//		stringstream sb;
//	    sb << fixed << setprecision(2) << percentage;
//	    string result = sb.str();
//	    replace(result.begin(), result.end(), '.', ',');
//		cout <<"Spike: "<< result << "%" << endl;
//	}
//}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, s, b, a, x, y, z, ss = 0, sb = 0, sa = 0, sx = 0, sy = 0, sz = 0;
    string name;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> s >> b >> a;
        cin >> x >> y >> z;
        ss += s;
        sa += b;
        sb += a;
        sx += x;
        sy += y;
        sz += z;
    }
    if (ss != 0) {
        double percentage = sx * 100.0 / ss;
        stringstream ss_stream;
        ss_stream << fixed << setprecision(2) << percentage;
        string result = ss_stream.str();
        replace(result.begin(), result.end(), '.', ',');
        cout << "Service: " << result << "%." << endl;
    }
    if (sa != 0) {
        double percentage = sy * 100.0 / sa;
        stringstream sa_stream;
        sa_stream << fixed << setprecision(2) << percentage;
        string result = sa_stream.str();
        replace(result.begin(), result.end(), '.', ',');
        cout << "Block: " << result << "%." << endl;
    }
    if (sb != 0) {
        double percentage = sz * 100.0 / sb;
        stringstream sb_stream;
        sb_stream << fixed << setprecision(2) << percentage;
        string result = sb_stream.str();
        replace(result.begin(), result.end(), '.', ',');
        cout << "Spike: " << result << "%." << endl;
    }
    return 0;
}

