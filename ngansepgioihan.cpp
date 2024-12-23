
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int k;
    cin >> k;
    vector<int> stack;
    for (int i = 0; i < k; i++) {
        string operation;
        cin >> operation;
        if (operation == "PUSH") {
            int value;
            cin >> value;
            if (stack.size() < n) {
                stack.push_back(value);
            }
        } else if (operation == "POP") {
            if (!stack.empty()) {
                stack.pop_back();
            }
        }
    }
    for (int i = stack.size() - 1; i >= 0; i--) {
    	cout << stack[i] << ' ';
    }
    cout << endl;
    return 0;
}

