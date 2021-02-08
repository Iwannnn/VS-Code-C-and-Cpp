#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    int number;
    node *next;
};
int main() {
    node *p = new node, *q, *head = p;
    int k, n, num = 0;
    cin >> k >> n;
    while (n >= 0) {
        num++;
        if (num == 1) {
            p->data = n;
            p->number = num;
        } else {
            q = p;
            p = new node;
            p->data = n;
            p->number = num;
            q->next = p;
        }
        cin >> n;
    }
    if (k > num || k <= 0) {
        cout << "NULL" << endl;
    } else {
        p = head;
        while (p != NULL) {
            if (p->number == num - k + 1) {
                cout << p->data << endl;
                break;
            }
            p = p->next;
        }
    }
    system("pause");
}