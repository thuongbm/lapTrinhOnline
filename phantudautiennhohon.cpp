//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//bool cmp(pair<int,int> a,pair<int,int> b){
//    return a.first<b.first; 
//}
//int main() {
//    int n, q, x;
//    cin >> n >> q;
//    int a[n];
//    pair <int, int> p[n];
//    for (int i = 0 ; i < n ; i++){
//    	cin >> a[i]; 
//    	p[i].first = a[i];
//    	p[i].second = i+1;
//	}
////	sort (p, p + n, cmp);
//	for (int i = 0; i < q ; i++){
//		cin >> x;
//		int res = INT_MAX;
//		int check = 0;
//		int l = 0, r = n-1;
//		bool found;
//		while (l <= r){
//			int m = ( l + r ) / 2;
//			if (p[m].first <= x){
//				found = true;
//				res = min(res, p[m].second);
//				l = m + 1;
//			}
//			else{
//				r = m -1;
//			}
//		}
//		if (found == 1){
//			cout << res << endl;
//		}
//		else{
//			cout << 0 << endl;
//		}
//	}
//    return 0;
//}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    scanf("%d %d", &n, &q);
    int a[1000000], b[1000000];
    for(int i=1;i<=n;i++) scanf("%d", a+i);
    for(int j=1;j<=q;j++) {
    scanf("%d", b+j); 

        int d=0; 
        for(int i=1;i<=n;i++){
            if(b[j]>=a[i]){ d=i; 
        break;}  
        }
        if(d){

        printf("%d\n", d); } else printf("0\n"); 
    } 

}
