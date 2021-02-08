#include <bits/stdc++.h>
using namespace std;
struct btree {
    string val;
    btree *lchild = NULL;
    btree *rchild = NULL;
};
btree *creattree(string dlr, string ldr) {
    btree *p = new btree;
    char a = dlr[0];
    int i = ldr.find(a);
    string s1, s2;
    p->val = a;
    s1 = ldr.substr(0, i);
    s2 = ldr.substr(i + 1, ldr.size() - i - 1);
    if (s1.size() != 0)
        p->lchild = creattree(dlr.substr(1, s1.size()), s1);
    else
        p->lchild = NULL;

    if (s2.size() != 0)
        p->rchild = creattree(dlr.substr(s1.size() + 1, s2.size()), s2);
    else
        p->rchild = NULL;
    return p;
}
int deep(btree *root, int num) {
    int a = num, b = num;
    if (root->lchild != NULL) {
        int temp = num + 1;
        a = deep(root->lchild, temp);
    }
    if (root->rchild != NULL) {
        int temp = num + 1;
        b = deep(root->rchild, temp);
    }
    if (a > b)
        return a;
    else
        return b;
    //return a:b?a>b
}
int main() {
    int n, depth = 1;
    btree *root;
    string dlr, ldr;
    cin >> n >> dlr >> ldr;
    root = creattree(dlr, ldr);
    depth = deep(root, 1);
    cout << depth << endl;
    system("pause");
}