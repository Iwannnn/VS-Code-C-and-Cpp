#include<stdio.h>
struct stu{
    char *num;
	char *name;
	int a,b;
	double ave;	
		
};
int main(){
	int i;
	struct stu s[3];
	for(i=0;i<3;i++){
		scanf("%s%s%d%d",s[i].num,s[i].name,&s[i].a,&s[i].b);
		s[i].ave=(s[i].a+s[i].b)/2.0;
		printf("ave[%d]=%.1f\n",i,s[i].ave);		
	}	
	return 0;		
}
