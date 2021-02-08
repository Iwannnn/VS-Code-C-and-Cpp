#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d\n",&a,&b,&c);
    if (a%b==0 && a%c==0)
        printf("Yes");
    else
        printf("No");
}
