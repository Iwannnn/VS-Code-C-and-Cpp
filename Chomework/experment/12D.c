#include <stdio.h>
int main(){
    int n,i,j,m,ai[500],xuv[100][100],t,x,index,u,v,op;
    scanf("%d%d", &n, &m);
    for (i = 1; i <= n;i++)
        scanf("%d", &ai[i]);
    for (i = 0; i < m;i++){
        for (j = 0; j < 2;j++){
            scanf("%d", &xuv[i][j]);
        }
    }
    scanf("%d", &t);
    while(t--){
        scanf("%d", &op);
        if(op==1){
            scanf("%d", &x);
            index = xuv[xuv[x - 1][0] - 1][1];
            printf("%d\n", ai[index]);
        }else{
            scanf("%d%d%d", &x, &u, &v);
            xuv[x - 1][0] = u;
            xuv[x - 1][1] = v;
        }
    }
}