#include <stdio.h>
int main()
{
    int n,i,j,mini,begin[1100],end[1100],temp,nowtime,sum;
    while(scanf("%d",&n)){
        sum=0;
        for(i=1;i<=n;i++)
            scanf("%d%d",&begin[i],&end[i]);
        for(i=1;i<n;i++){
        	mini=i;
            for(j=i+1;j<=n;j++)
                if(end[j]<end[mini])
                	mini=j;
            temp=begin[i];begin[i]=begin[mini];begin[mini]=temp;
			temp=end[i];end[i]=end[mini];end[mini]=temp;
		}
		nowtime=-1;
        for(i=1;i<=n;i++){
            if(begin[i]>=nowtime){
                sum++;
                nowtime=end[i];
            }
		}
        printf("%d\n",sum);
    }
    return 0;
}