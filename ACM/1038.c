#include<stdio.h>
int main()
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year,month,day;
    int days=0,i;
    scanf("%d-%d-%d",&year,&month,&day);
    for(i=0;i<month-1;i++)
    days+=a[i];
    days+=day;
    if((year%4==0&&year%100!=0||year%400==0)&&month>=3)
    days+=1;
    printf("%d",days);
    return 0;
}
