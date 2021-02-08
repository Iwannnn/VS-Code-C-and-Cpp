#include <bits/stdc++.h>
using namespace std;
typedef struct TNode *Position;
typedef Position BinTree;
typedef char ElementType;
struct TNode {
    ElementType Data;
    BinTree Left;
    BinTree Right;
};
BinTree CreatBinTree(); /* 实现细节忽略 */
void PreorderPrintLeaves(BinTree BT);

int main() {
    BinTree BT = CreatBinTree();
    printf("Leaf nodes are:");
    PreorderPrintLeaves(BT);
    printf("\n");

    return 0;
}
void PreorderPrintLeaves(BinTree BT) {
    if (BT) {
        if (BT->Left == NULL && BT->Right == NULL) cout << " " << BT->Data;
        PreorderPrintLeaves(BT->Left);
        PreorderPrintLeaves(BT->Right);
    }
}