#include<stdio.h>
int main(){
    int n, k;
    while(~scanf("%d%d",&n,&k)){
        int a[10011],x=0,count=n,i,t=1,p=0;
        for(i=1;i<=n;i++)
            a[i]=i;
        count=n;
        for (;count>1;){
            if(t==1){ 
                for (i = p+1; i<=n&&count>1; i++){
                    if(a[i]!=-1){
                        x++;
                        p = i;
                    }else{
                        continue;
                    }
                    if(a[i]!=-1&&k==x){
                        a[i] = -1;
                        count--;
                        x = 0;
                    }
                }
                t = -1;
            }else if(t==-1){
                for (i = p-1; i>=1&&count>1; i--){
                    if(a[i]!=-1){
                        x++;
                        p=i;
                    }else{
                        continue;
                    }
                    if(a[i]!=-1&&k==x){
                        a[i] = -1;
                        count--;
                        x = 0;
                    }
                }
                t = 1;
            }
        }    
        for (i = 1; i <= n; i++)
            if (a[i] != -1)
                printf("%d\n", i);
    }
}