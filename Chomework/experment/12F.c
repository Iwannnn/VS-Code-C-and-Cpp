#include<stdio.h>
#include<math.h>
double calAreaSquare(double(*calArea)(double),double x){
    double s;
    s=(*calArea)(x);
    return s; 
}
double calAreaCircle(double(*calArea)(double),double x){
    double s,pi;
    pi=acos(-1.0);
    s=pi*(*calArea)(x);
    return s;
}
double calArea1(double x){
    return(x*x);
}
int main(void){
    int t,op;
    double(*calArea)(double);
    double x;
    calArea=calArea1;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%lf",&op,&x);
        if(op==1)
            printf("%.5lf\n",calAreaSquare(calArea,x));
        if(op==2)
            printf("%.5lf\n",calAreaCircle(calArea,x));
    }
    return 0;
}