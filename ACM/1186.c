#include <stdio.h>
int main(void){
    int n;
    while(~scanf("%d",&n)){
        int a[110],flag=1;
        int *p = a+1;
        for (int i = 0; i < n;i++){
            scanf("%d", &a[i]);
        }
        for (p=a+1; p < a+n-1;p++){
            if(*p>*(p-1)&&*p>*(p+1)&&flag==1){
                printf("%d", *p);
                flag = 0;
            }else if(*p>*(p-1)&&*p>*(p+1)){
                printf(" %d", *p);
            }
        }
        printf("\n");
    }
}