#include <bits/stdc++.h>
using namespace std;
main(){
	int x,y;
	cin>>x>>y;
	int a=max(x,y);
	int b=min(x,y);
	int sum=0;
	for (int i=b+1;i<a;i++){
		if (i%2!=0) sum+=i;
	}
	cout<<sum;
}
//#include <bits/stdc++.h>
//using namespace std;
//
//int main() {
//    int x, y;
//    cin >> x >> y;
//    int a = max(x, y);
//    int b = min(x, y);
//    int sum = 0;
//    for (int i = b + 1; i < a; i++) {
//        if (i % 2 != 0) sum += i;
//    }
//    cout << sum;
//    return 0; // Thêm dòng này d? chuong trình k?t thúc m?t cách rõ ràng
//}

