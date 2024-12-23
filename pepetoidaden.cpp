#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int h, m, o;
        cin >> h >> m >> o;
        if (o == 1) 
            cout << setw(2) << setfill('0') << h << ':' << setw(2) << setfill('0') << m << " - Canh cua mo ra!" << endl;
        else 
            cout << setw(2) << setfill('0') << h << ':' << setw(2) << setfill('0') << m << " - Canh cua dong lai!" << endl;
    }
    return 0;
}

