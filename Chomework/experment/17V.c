#include <stdio.h>
int main(){
    int n;
    while(~scanf("%d",&n)){
        getchar();
        if(n==0) break;
        int i,j,s[10][10];
        char a,b='.',c='X';
        for (i = 1; i <= n;i++){
            for (j = 1; j <= n;j++){
                scanf("%c", &a);
                if(a==b)
                    s[i][j] = 0;
                else if(a==c)
                    s[i][j] = 1;
            }
            getchar();
        }
        for (i = 1; i <= n;i++){
            for (j = 1; j <= n;j++){
                if(s[i][j]==1){
                    
                }
            }
        }
    }
}