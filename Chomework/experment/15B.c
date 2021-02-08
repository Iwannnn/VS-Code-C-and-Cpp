#include <stdio.h>
int main(){
     int n;
     while(~scanf("%d",&n)){
        if(n>=0&&n<=50){
            printf("O\n");
        }else if(n>=51&&n<=70){
            printf("I\n");
        }else if(n>=71&&n<=90){
            printf("II\n");
        }else if(n>=91&&n<=110){
            printf("III\n");
        }else if(n>=111&&n<=130){
            printf("IV\n");
        }else if(n>=131){
            printf("V\n");
        }
     }
     return 0;
}