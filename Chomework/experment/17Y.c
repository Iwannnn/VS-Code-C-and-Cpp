#include <stdio.h>
int main(){
	int a[1234],f[1234],n;
	while(scanf("%d",&n)!=EOF){
		int i,j,ans=0;
		for(i=1;i<=n;i++){
			scanf("%d",&a[i]);
			if(a[i]>=a[1])
				f[i]=1;
			else
				f[i]=0;
		}
		for(i=1;i<=n;i++){
			if(a[i]>=a[1]){
				for(j=1;j<i;j++){
					if(a[j]<a[i])
						f[i]=f[i]>f[j]+1?f[i]:f[j]+1;
				}
			}else{
				continue;
			}
		}
		for(i=1;i<=n;i++)
			ans=f[i]>ans?f[i]:ans;
		printf("%d\n",ans);
	}
} 