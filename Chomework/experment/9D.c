#include <stdio.h>
struct ymd{ 
    int Y,M,D; 
}; 
const short MonthDay[]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
int diji(int Y, int M, int D){ 
    const short MonthDay[]={0,31,28,31,30,31,30,31,31,30,31,30,31}; 
    int JD,i; 
    JD=D; 
    for (i=0;i<M;i++) JD+=MonthDay[i]; 
    if ((((Y%4==0)&&(Y%100!=0))||(Y%400==0)) && (M>2)) JD++;  
    return JD; 
}  
int main(){ 
    int d;
    char c1,c2;
    struct ymd a;  
    while(~scanf("%d%c%d%c%d",&a.Y,&c1,&a.M,&c2,&a.D)){
        d=diji(a.Y,a.M,a.D); 
        printf("%d\n",d); 
    }
    return 0; 
}