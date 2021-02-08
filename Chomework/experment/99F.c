#include <stdio.h>
int min(int a,int b){
    if(a<b)
        return a;
    else
        return b;
}
int main(){
    int n, m;
    while(~scanf("%d%d",&n,&m)){
        long long int i,j,a[30][30]={0};
        a[0][0] = 1;
        for (i = 1; i <= n;i++)
            for (j = 1; j <= min(i,m);j++)
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j] * j;
        printf("%lld\n", a[n][m]);
    }
}