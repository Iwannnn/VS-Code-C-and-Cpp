#include <stdio.h>
#include <stdlib.h>
#include <process.h>
int main(){
    FILE *fp;
    int big=0, small=0, num=0, other=0;
    char c;
    if((fp=fopen("D:\\VS-Code\\VS-Code-C\\C homework\\scr.dat","r")) == NULL){
   		printf("File open error!\n");
   		exit(0);
    }
    while((c=fgetc(fp))!=EOF){
        if(c>='A'&&c<='Z')
            big++;
        else if(c>='a'&&c<='z')
            small++;
        else if(c>='0'&&c<='9')
            num++;
        else
            other++;
    }
    printf("big=%d\nsmall=%d\nnum=%d\nother=%d\n", big, small, num, other);
    if(fclose(fp)){	 	
       printf( "Can not close the file!\n" );
       exit(0);
    }
    system("pause");
    return 0;

}