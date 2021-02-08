#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
int chu(int p,int q)
{
	if(p%q==0)
		return p/q;
	else
		return 111111; 
}
int fun(int i,int j,int c)
{
	int s;
	switch(c)
	{
	case 1:  s=i+j;break;
	case 2:  s=i-j;break;
	case 3:  s=i*j;break;
	case 4:  s=chu(i,j);break;
	}
	return s;
}
int main(){
	char end;
	do{
		char s[4];
		int i,j,k,l,m=0,flag=0,f[4],a,b,c,d1,d2;
		while(m<4){
			scanf("%s", s);
			if(s[0]=='1'&&s[1]=='0')
        		f[m] = 10;
       		else if(s[0] == 'A')
            	f[m] = 1;
        	else if(s[0] == 'J')
        	    f[m] = 11;
        	else if(s[0] == 'Q')
            	f[m] = 12;
        	else if(s[0] == 'K')
            	f[m] = 13;
			else
            	f[m] = (s[0] - '0');
			m++;
		}
		for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(j!=i){
					for(k=0;k<4;k++){
						if(k!=i&&k!=j){
							for(l=0;l<4;l++){
								if(l!=i&&l!=j&&l!=k){
									for(a=1;a<5;a++){        
										for(b=1;b<5;b++){
											for(c=1;c<5;c++){
												d1 = fun(fun(fun(f[i], f[j], a), f[k], b), f[l], c);
												d2 = fun(fun(f[i], f[j], a), fun(f[k], f[l], b), c);
												if(d1==24||d2==24)
													flag = 1;
											}
										}		
									}
								}
							}
						}
					}
				}
			}
		}
		if(flag==1)
			printf("Yes\n");
		else
			printf("No\n");
		end = getchar();
	} while (end=='\n');
}