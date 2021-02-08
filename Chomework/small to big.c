#include <process.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    FILE *fpin,*fpout;
    char ch;
    if((fpin=fopen("D:\\VS-Code\\VS-Code-C\\C homework\\t.dat","r+"))==NULL){
        printf("File open error!\n");
   		exit(0);
    }
    if((fpout=fopen("D:\\VS-Code\\VS-Code-C\\C homework\\temp.dat","w+"))==NULL){
        printf("File open error!\n");
   		exit(0);
    }
    while ((ch=fgetc(fpin))!=EOF){
        if(ch>='a'&&ch<='z')
            ch += 'A' - 'a';
        fputc(ch, fpout);
    }
    fclose(fpin);
    fclose(fpout);
    system("del t.dat");
    system("rename temp.dat t.dat");
    system("pause");
    return 0;
}