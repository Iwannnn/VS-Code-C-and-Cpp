#include <stdio.h>
int main()
{
    int hour1, min1, hour2 , min2, c;
    scanf("%d:%d",&hour1,&min1);
    scanf("%d:%d",&hour2,&min2);
    c=(hour2-hour1)*60+(min2-min1)-1;
    printf("%d\n",c);
    return 0;
}
