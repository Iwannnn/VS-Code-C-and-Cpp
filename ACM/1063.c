#include <stdio.h>
int main()
 {
    int m,i=2;
    while (scanf("%d",&m)!=EOF)
    {
        for(i=2;i<m;i++)
        {
            if(m%i==0)
            break;
        }
        if(i==m)
        printf("Yes\n");
        else
        printf("No\n");
    }  
    return 0;
}