#include<stdio.h>
int main() {
    int m,n,i,j,k;
	while(scanf("%d%d",&m,&n)!=EOF){
        int s[m], a[m][n],b[m],c[m],temp;
        for (i = 0; i < m; i++){
            s[i] = 0;
            for (j = 0; j < n; j++){
                scanf("%d", &a[i][j]);
                s[i] = s[i] + a[i][j];
            }
            b[i] = a[i][0];
        }
        for (int i = m - 1; i >0; i--) {
            for (int j = m-1; j > m-1-i;j--) {
                if(b[j]>b[j-1]) {
                    temp = b[j];
                    b[j] = b[j - 1];
                    b[j - 1] = temp;
                }
            }
        }
        for (j = 0; j < m;j++){
            for (k = 0; k < m;k++)
            {
                if (b[j]==a[k][0])
                {
                    c[j] = k;
                }
            }
        }            
        for (i = 0; i < m; i++){
            for (j = 0; j < n; j++){
                printf("%d ", a[c[i]][j]);
            }
                printf("%d\n", s[c[i]]);
        }
	}
}