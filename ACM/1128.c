#include <stdio.h>
#include <string.h>
int n,c[100][100];
int f(int q,int p){
    int i,j;
    for(i=0;i<q;i++){
        for(j=0;j<p-1;j++)
            printf("%d ",c[i][j]);
        printf("%d\n", c[i][j]);
    }
    printf("\n");
}
int main()
{
    int n,a[100][100],b[100][100];
    int p,q,i,j,p1,q1,k;
    char s[5];
    scanf("%d", &n);
    while(n--){
            memset(a,0,sizeof(a));
            memset(b,0,sizeof(b));
            memset(c,0,sizeof(c));
            scanf("%d%d", &q, &p);
            for(i=0;i<q;i++){
                for(j=0;j<p;j++)
                    scanf("%d",&a[i][j]);
            }        
            scanf("%d%d", &q1, &p1);
            for (i = 0; i < q1; i++){
                for (j = 0; j < p1; j++)
                    scanf("%d",&b[i][j]);
            }        
                while(scanf("%s",s)){
                    if(s[0]=='e'&&s[1]=='n'&&s[2]=='d')break;
                    if(strcmp(s,"-")==0){
                           memset(c,0,sizeof(c));
                            for(i=0;i<q;i++)
                            {
                                for(j=0;j<p;j++)
                                    c[i][j]=a[i][j]-b[i][j];
                            }
                        f(q,p);
                    }
                    if(strcmp(s,"=")==0){
                            for(i=0;i<q;i++)
                            {
                                for(j=0;j<p;j++)
                                    a[i][j]=b[i][j];
                            }
                    }
                    if(strcmp(s,"+")==0){
                        memset(c,0,sizeof(c));
                            for(i=0;i<q;i++)
                            {
                                for(j=0;j<p;j++)
                                    c[i][j]=a[i][j]+b[i][j];
                            }
                        f(q,p);
                    }
                    if(strcmp(s,"*")==0){
                        memset(c,0,sizeof(c));
                        for(i=0;i<q;i++){
                            for(j=0;j<p1;j++){
                                for(k=0;k<p;k++)
                                    c[i][j]+=a[i][k]*b[k][j];
                            }    
                        }
                        f(q,p1);
                    }
                }
    }
    return 0;
}