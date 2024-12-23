#include <stdio.h>
#define max 100000
struct my_stack{
	int t;
	int a[max];
};
void create(my_stack &s){
	s.t=-1;
}
int empty(my_stack s){
	if (s.t==-1) return 0;
	else return 1;
}
int push(my_stack &s, int x) {
    if (s.t >= max - 1) {
        return 0;
    } else {
        s.t++;
        s.a[s.t] = x;
        return 1;
    }
}
int pop(my_stack &s, int &x) {
    if (empty(s)) {
        return 0;
    } else {
        x = s.a[s.t];
        s.t--;
        return 1;
    }
}
int top(my_stack s, int &x) {
    if (empty(s)) {
        return 0;
    } else {
        x = s.a[s.t];
        return 1;
    }
}
main(){
	my_stack s;
    createstack(s);
    int n;
    scanf("%d", &n);
    for (int i=0;i<n;i++){
    	char x[50];
    	gets(x);
    	int a=strlen(x);
    	if (a%2==0){
    		for (int i=0;i<a;i++){
    			if (x[i]=='{')
			}
		}
	}
}
