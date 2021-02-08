#include <stdio.h>
int main(){
    int n,m;
    while(~scanf("%d",&n)){
        scanf("%d", &m);
        int i,j,a[n+1][m];
        for (i = 1; i <= n;i++)
            for (i = 0; j < m;j++)
                scanf("%d", &a[i][j]);
    }
}