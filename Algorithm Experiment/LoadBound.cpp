#include <iostream>
#include <queue>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define num 100
float w[num];
int x[num];
float c;
int n;
float bestw;
template <class Type> class HeapNode;
template <class Type> class bbnode;
template <class Type> void AddLiveNode(priority_queue<HeapNode<Type>> &H, bbnode<Type> *E, Type wt, bool ch, int lev);
template <class Type> Type MaxLoading(Type w[], Type c, int n, int bestx[]);

template <class Type> class bbnode {
    friend void AddLiveNode<Type>(priority_queue<HeapNode<Type>> &H, bbnode<Type> *E, Type wt, bool ch, int lev);
    friend Type MaxLoading<Type>(Type *, Type, int, int *);
    friend class AdjacencyGraph;

  public:
    bbnode<Type> *parent;
    bool Lchild;
};
template <class Type> class HeapNode {
    friend void AddLiveNode<Type>(priority_queue<HeapNode<Type>> &H, bbnode<Type> *E, Type wt, bool ch, int lev);
    friend Type MaxLoading<Type>(Type *, Type, int, int *);

  public:
    operator Type() const {
        return uweight;
    }

  public:
    bbnode<Type> *ptr;
    Type uweight;
    int level;
};
template <class Type> void AddLiveNode(priority_queue<HeapNode<Type>> &H, bbnode<Type> *E, Type wt, bool ch, int lev) {
    bbnode<Type> *b = new bbnode<Type>;
    b->parent = E;
    b->Lchild = ch;
    HeapNode<Type> N;
    N.ptr = b;
    N.uweight = wt;
    N.level = lev;
    H.push(N);
}
template <class Type> Type MaxLoading(Type w[], Type c, int n, int bestx[]) {
    priority_queue<HeapNode<Type>> H;
    Type *r = new Type[n + 1];
    r[n] = 0;
    for (int j = n - 1; j > 0; j--) {
        r[j] = r[j + 1] + w[j + 1];
    }
    int i = 1;
    bbnode<Type> *E = 0;
    Type Ew = 0;
    while (i != n + 1) {
        if (Ew + w[i] <= c) {
            AddLiveNode(H, E, Ew + w[i] + r[i], true, i + 1);
        }
        AddLiveNode(H, E, Ew + r[i], false, i + 1);
        HeapNode<Type> N = H.top();
        H.pop();
        i = N.level;
        E = N.ptr;
        Ew = N.uweight - r[i - 1];
    }
    for (int j = n; j > 0; j--) {
        bestx[j] = E->Lchild;
        E = E->parent;
    }
    return Ew;
}
int main() {
    cout << "轮船重量:";
    cin >> c;
    cout << "请输入物品个数：";
    cin >> n;
    cout << "物品的重量:";
    for (int i = 1; i <= n; i++) {
        cin >> w[i];
    }
    bestw = MaxLoading<float>(w, c, n, x);
    cout << "分支限界选择结果为：" << endl;
    for (int i = 1; i <= n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
    cout << "最优装载重量为：" << bestw << endl;
    system("pause");
    return 0;
}