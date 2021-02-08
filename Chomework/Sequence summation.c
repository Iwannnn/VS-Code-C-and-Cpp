#include <stdio.h>
#include <math.h>
int main(void){
    double x,fact(int);
    while(~scanf("%lf",&x)) {
        double sum = 0;
        int n=1;
        while(pow(x,n)/fact(n)>=1e-5){
            sum = sum + pow(x, n) / fact(n);
            n++;
        }
        printf("%.3f\n", sum);
    }
}
double fact(int a){
    double s=1;
	for(int i=1;i<=a;i++){
		s=s*i;
	}
	return s;
}