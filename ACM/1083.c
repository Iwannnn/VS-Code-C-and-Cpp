#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF){
        if(a+b!=c){
            printf("NO!\n");
        }else{
            int m[10],i,n=0;
            for (i = 1; i < 10;i++)
                m[i] = 0;
            while(a!=0){
                m[a % 10] = m[a % 10] + 1;
                a = a / 10;
            }
            while(b!=0){
                m[b % 10] = m[b % 10] + 1;
                b = b / 10;
            }
            while(c!=0){
                m[c % 10] = m[c % 10] + 1;
                c = c / 10;
            }
            for (i = 1; i < 10; i++)
            {
                if(m[i]==1)
                    n = n + 1;
            }
            if(n==9)
                printf("YES!\n");
            else
                printf("NO!\n");
        }
    }
}    
