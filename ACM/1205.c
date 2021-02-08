#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main(int argc,char *argv[]){
    int m, n, k, l, d,p,flag=1;
    scanf("%d%d%d%d%d", &m, &n, &k, &l, &d);
    int a[m][n],b[m][n],xa,ya,xb,yb;
    int i[m], j[n];
    memset(i,0,sizeof(i));
    memset(j,0,sizeof(j));
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    while(~scanf("%d%d%d%d",&xa,&ya,&xb,&yb)){
        a[xa - 1][ya - 1] = 1;
        b[xb - 1][yb - 1] = 1;
        if(abs(xa-xb)<=1&&ya==yb){
            if(xa<xb)
                i[xa] = 1;
            else
                i[xb] = 1;
        }
        if(abs(ya-yb)<=1&&xa==xb){
            if(ya<yb)
                j[ya] = 1;
            else
                j[yb] = 1;
        }
    }
    for (p = 0; p < m;p++){
        if(i[p]&&flag){
            printf("%d", i[p]);
            flag = 0;
        }else if(i[p]){
            printf(" %d", i[p]);
        }
    }
    printf("\n");
    flag = 1;
    for (p = 0; p < n;p++){
        if(i[p]&&flag){
            printf("%d", i[p]);
            flag = 0;
        }else if(i[p]){
            printf(" %d", i[p]);
        }
    }
    printf("\n");
    return 0;
}