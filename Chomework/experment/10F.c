#include <stdio.h> 
void f(int *a,int *m){
    int i,j;
    for(i=0;i<*m;i++)
    if(a[i] < 0){ 
        for(j=i--;j < *m-1;j++)
            a[j]=a[j+1];
        (*m)--; 
    }
}
int main(){
    int i,n=7,x[7]={1,-2,3,4,-5,6,-7};
    f(x,&n);
    for(i=0;i < n;i++) 
        printf("%5d",x[i]); 
    printf("\n"); 
}