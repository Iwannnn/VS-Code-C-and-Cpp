#include <stdio.h>
#include <string.h>
int main(void){
    int n; 
    while(~scanf("%d",&n)){
   	getchar();
  	int i; 
  	    for(i=0;i<=n-1;i++){
  		char s[6];
  		scanf("%s",s);
  		 	if(strcmp(s,"AC") == 0)
            printf("Accepted\n");
           	if(strcmp(s,"PE") == 0)
           	printf("Presentation Error\n");
            if(strcmp(s,"WA") == 0)
            printf("Wrong Answer\n");
            if(strcmp(s,"RE") == 0)
            printf("Runtime Error\n");
            if(strcmp(s,"TLE") == 0)
            printf("Time Limit Exceeded\n");
            if(strcmp(s,"MLE") == 0)
            printf("Memory Limit Exceeded\n");
           	if(strcmp(s,"OLE") == 0)
            printf("Output Limit Exceeded\n");
            if(strcmp(s,"CE") == 0)
            printf("Compilation Error\n");
	  	}  	
	}           
	return 0;
}