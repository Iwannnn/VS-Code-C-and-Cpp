int GetHeight(BinTree BT) {
    int lhight, rhight;
    if (BT != NULL) {
        lhight = GetHeight(BT->Left);
        rhight = GetHeight(BT->Right);
        if (lhight >= rhight)
            return lhight + 1;
        else
            return rhight + 1;
    }
    return 0;
}