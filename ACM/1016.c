#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int year1,month1,day1,year2,month2,day2,cha;
    scanf("%d-%d-%d %d-%d-%d",&year1,&month1,&day1,&year2,&month2,&day2);
    cha=day2-day1-1;
    printf("%d",cha);
}
