#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct node {
    int n;
    node* next;
};

typedef struct node* Node;

Node makenode(int x) {
    Node temp = new node();
    temp->n = x;
    temp->next = NULL;
    return temp;
}

int size(Node a) {
    int cnt = 0;
    while (a != NULL) {
        cnt++;
        a = a->next;
    }
    return cnt;
}

void deletemid(Node& a, int pos) {
    if (pos <= 0 || pos > size(a)) {
        return;
    }
    if (pos == 1) {
        Node temp = a;
        a = a->next;
        delete temp;
        return;
    }
    
    Node after = NULL, before = a;
    for (int i = 1; i < pos; i++) {
        after = before;
        before = before->next;
    }
    if (before != NULL) {
        after->next = before->next;
        delete before;
    }
}

void insertAtEnd(Node& head, int x) {
    Node newNode = makenode(x);
    if (head == NULL) {
        head = newNode;
    } else {
        Node temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteAll(Node& head, int d) {
    int pos = 1;
    Node temp = head;
    while (temp != NULL) {
        if (temp->n == d) {
            deletemid(head, pos);
            temp = head; 
            pos = 1;      
        } else {
            temp = temp->next;
            pos++;
        }
    }
}

int main() {
    Node head = NULL;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insertAtEnd(head, x);
    }

    int d;
    cin >> d;
    
    deleteAll(head, d);
    Node temp = head;
    while (temp != NULL) {
        cout << temp->n << " ";  
        temp = temp->next;
    }

    return 0;
}

