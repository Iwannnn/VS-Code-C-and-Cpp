#include<stdio.h>
int main(void){
	int n;
	char g[60];
	int i,j,a;
	scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(g);
		if((g[0]>='a'&&g[0]<='z')||(g[0]>='A'&&g[0]<='Z')||(g[0]=='_')){ 
			a=1;
			for(j=1;g[j]!='\0';j++){
				if((g[j]>='a'&&g[j]<='z')||(g[j]>='A'&&g[j]<='Z')||(g[j]=='_')||(g[j]>='0'&&g[j]<='9')){
					a=1;
				}else{
					a=0;
 					break;
				}
			}
		}
		else{
			a=0;
		}	
		if(a==0)printf("no\n");
		if(a==1)printf("yes\n");
	}
}