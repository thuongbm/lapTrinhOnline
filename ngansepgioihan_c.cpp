#include <stdio.h>
#include <string.h>
#define max 10000 
struct my_stack {
    int t;
    int a[max];
};

void createstack(my_stack &s) {
    s.t = -1;
}

int empty(my_stack s) {
    return s.t == -1;
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

int main() {
    my_stack s;
    createstack(s);
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    char command[50];

    for (int i = 0; i < k; i++) {
        scanf("%s", command);
        if (strcmp(command, "PUSH") == 0) {
            int x;
            scanf("%d", &x);
            push(s, x);
        } else if (strcmp(command, "POP") == 0) {
            if (!empty(s)) {
                int x;
                pop(s, x);
            }
        }
    }
    for (int i = s.t-1; i >= 0; i--) {
        printf("%d ", s.a[i]);
    }
    return 0;
}

