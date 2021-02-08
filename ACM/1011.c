#include<stdio.h>
#include<math.h>
int main (void)
{
    double money,balance;
    int all, t;
    all=100;
    t=3;
    scanf("%lf",&money);
    balance=all-t*money;
    printf("%.2f",balance);
    return 0;
}