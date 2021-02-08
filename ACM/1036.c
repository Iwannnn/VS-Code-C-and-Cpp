#include <stdio.h>
void main()
{
int a,b,c,d,e,x,m;
scanf("%d",&x);
e=x/10000;
d=x%10000/1000;
c=x%1000/100;
b=x%100/10;
a=x%10;
if(x>99999||x<=0)
printf("ERROR!\n");
else if(x>9999){
m=5;

printf("%d\n%d%d%d%d%d\n",m,a,b,c,d,e);}
else if(x>999){
m=4;
printf("%d\n%d%d%d%d\n",m,a,b,c,d);}
else if(x>99){
m=3;
printf("%d\n%d%d%d\n",m,a,b,c);}
else if(x>9){
m=2;
printf("%d\n%d%d\n",m,a,b);}
else {
m=1;
printf("%d\n%d\n",m,a);}
} 