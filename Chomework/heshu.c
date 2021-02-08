#include <process.h>
#include <stdio.h>
#include <stdlib.h>
int judge(int n){
    int sum=0;
    for (int i = 1; i < n;i++){
        if(n%i==0)
            sum += i;
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
int main(){
    FILE *fp;
    if((fp=fopen("D:\\VS-Code\\VS-Code-C\\C homework\\design.dat","r+"))==NULL){
        printf("File open error!\n");
   		exit(0);
    }
    for (int i = 1; i <= 10000;i++){
        if(judge(i)==1)
            fprintf(fp, "%6d", i);
    }
    if(fclose(fp)){
        printf( "Can not close the file!\n" );
        exit(0);
    }
    system("pause");
    return 0;
}