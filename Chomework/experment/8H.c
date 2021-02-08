#include <stdio.h>
void sumDiff(int op1, int op2, int *psum, int *pdiff);
int main(int argc,char *argv[]){
    int op1, op2, a1, a2, *psum = &a1, *pdiff = &a2;
    while(~scanf("%d%d",&op1,&op2)){
        sumDiff(op1, op2, psum, pdiff);
        printf("sum=%d diff=%d\n", *psum, *pdiff);
    }
}
void sumDiff(int op1, int op2, int *psum, int *pdiff){
    *pdiff = op1 - op2;
    *psum = op1 + op2;
}