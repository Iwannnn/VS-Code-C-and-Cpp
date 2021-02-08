#include <stdio.h>
#include <process.h>
#define N 100
int main(){
    FILE *fp;
    char c;
    if((fp=fopen("D:\\VS-Code\\VS-Code-C\\C homework\\input.txt","r"))==NULL){
        printf("File open error!\n");
   		exit(0);
    }
    while((c=fgetc(fp))!=EOF){
        if(c!=' ')
            printf("%c", c);
    } 
    if(fclose(fp)){
        printf( "Can not close the file!\n" );
        exit(0);
    }
    system("pause");
}