#include <stdio.h>
void judge(int *p, int *flag,int i);
int main(int argc, char ** argv){
    int n,a[1000],*p=a,i,m=1,*flag=&m;
    scanf("%d", &n);
    for (i = n; i >= 0;i--)
        scanf("%d", p+i);
    for (i = n; i >=0;i--){
        judge((p + i), flag,i);
    }
    printf("\n");
    return 0;
}
void judge(int *p, int *flag,int i){
    if(i==1){
        if(*flag==1){
            if(*p==1){
                printf("x");
                *flag = 0;
            }else if(*p==-1){
                printf("-x");
                *flag = 0;
            }
            else if(*p!=0){
                printf("%dx", *p);
                *flag = 0;
            }
        }else if(*flag==0){
            if(*p==1)
                printf("+x");
            else if(*p==-1)
                printf("-x");
            else if(*p>0)
                printf("+%dx", *p);
            else if(*p<0)
                printf("%dx", *p);
        }
    }else if(i==0){
        if(*flag==1){
            if(*p!=0){
                printf("%d", *p);
                *flag = 0;
            }
        }else if(*flag==0){
            if(*p>0)
                printf("+%d",*p);
            else if(*p<0)
                printf("%d",*p);
        }
        
    }else{
        if(*flag==1){
            if(*p==1){
                printf("x^%d",i);
                *flag = 0;
            }else if(*p==-1){
                printf("-x^%d",i);
                *flag = 0;
            }else if(*p!=0){
                printf("%dx^%d", *p,i);
                *flag = 0;
            }
        }else if(*flag==0){
            if(*p==1)
                printf("+x^%d",i);
            else if(*p==-1)
                printf("-x^%d",i);
            else if(*p>0)
                printf("+%dx^%d", *p,i);
            else if(*p<0){
                printf("%dx^%d", *p,i);
            } 
        }
    }
}