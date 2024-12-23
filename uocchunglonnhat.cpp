#include <stdio.h>
#include <math.h>
main(){
	int m,n;
	scanf ("%d%d", &m,&n);
	if (m==0||n==0) printf ("\nuoc chung lon nhat la: %d", m+n);
	
	else{
		int min= (m<n) ? m:n;
		for (int i=min;i>0;i--){
			if (m%i==0&&n%i==0){
				printf ("\nuoc chung lon nhat la: %d", i);
				break;
			}
		}
	}
	int max= (m>n) ? m:n;
	while (1){
		if (max%m==0&&max%n==0){
			printf ("\nboi chung nho nhat la : %d", max);
			break;
		}
		max++;
	}
}
