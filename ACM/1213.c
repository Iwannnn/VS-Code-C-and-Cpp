#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc,char **argv){
    int n,m,*p=NULL,i,j=0,time=0,max;
    scanf("%d%d", &n, &m);
    int q[m];
    p = (int*)malloc(sizeof(int*) * n);
    scanf("%d", p);
    max = *p;
    for(i = 1;i<n;i++){
        scanf("%d", p + i);
        if(*(p+i)>max)
            max = *(p + i);
    }
    if(m>=n)
        time = max;
    else{
        for(i = 0; i < m;i++)
            q[i] = p[i];
        
    }
    printf("%d\n", time);
    free(p);
    system("pause");
    return 0;
}