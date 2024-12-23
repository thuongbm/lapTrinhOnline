//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main(){
//    int n;
//    cin >> n;
//    if (n == 1) {
//        cout << fixed << setprecision(1) << 1.0 << endl;
//	}
//    else {
//        long long f0 = 0, f1 = 1, fn = 0;
//        for (int i = 2; i <= n; i++) {
//            fn = f0 + f1;
//            f0 = f1;
//            f1 = fn;
//        }
//        cout << fixed << setprecision(1) << static_cast<float>(fn) << endl;
//    }
//    return 0;
//}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 0 << endl;
    } else if (n == 1) {
        cout << fixed << setprecision(1) << 1.0 << endl;
    } else {
        long long f0 = 0, f1 = 1, fn = 0;
        for (int i = 2; i <= n; i++) {
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
        }
        cout << fixed << setprecision(1) << fn << ".0" << endl;
    }
    return 0;
}


