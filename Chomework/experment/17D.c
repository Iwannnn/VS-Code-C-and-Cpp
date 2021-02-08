#include<stdio.h>
int main()
{
    long long int a, b;
    while(scanf("%lld%lld",&a,&b)!=EOF){
        long long int ans[6666],index = 0;
        int i;
        ans[index++]=b;
  		while(b>a){
   			if(b%10==1){
    				b/=10;
    				ans[index++]=b;
   			}else if(b%2==0){
    				b/=2;
    				ans[index++]=b;
   			}else break;
  		}
  		if(b==a){
            printf("YES %lld\n", index - 1);
            for (i = index - 1; i > 0;i--)
                printf("%lld ", ans[i]);
            printf("%lld\n", ans[0]);
        }else printf("NO\n");
    }
} 