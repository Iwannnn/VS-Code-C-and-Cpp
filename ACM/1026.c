#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    scanf("%d\n",&n);
    if (n%7==0 && n%5==0)
        printf("Yes");
    else
        printf("No");
}
