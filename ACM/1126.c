#include <stdio.h>
#include <string.h>
int main(){
    int n,m,a[10][10];
    while(scanf("%d%d",&n,&m)!=EOF){
        memset(a,0,sizeof(a));
        int t=1,i=0,j=0;
        a[0][0]=1;
        while(t<n*m){
            while(j+1<m&&!a[i][j+1])
                a[i][++j]=++t;  
            while(i+1<n&&!a[i+1][j])
                a[++i][j]=++t;
            while(j-1>=0&&!a[i][j-1])
                a[i][--j]=++t;
            while(i-1>=0&&!a[i-1][j])
                a[--i][j]=++t;
        } 
        for(i=0;i<n;i++){
            for(j=0;j<m-1;j++){
                printf("%2d ",a[i][j]);
            }
            printf("%2d\n",a[i][j]);
         }
    } 
    return 0;
} 