#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d\n",&n);
    if (n*1==0)
        printf("0");
    else if (n*1>0)
        printf("+");
    else
        printf("-");
}
