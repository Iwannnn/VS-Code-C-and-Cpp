#include <stdio.h>
int main()
{
    int i, n;
    double b;
    i=1;
    b=1;
    scanf("%d",&n);
    if (n>=1 && n<=10){
    for (i=1;i<=n;){
         b=b*i;
         i=i+1;
        }
    }
    printf("%.0f",b);
}