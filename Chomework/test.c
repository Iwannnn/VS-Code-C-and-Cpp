#include<stdio.h>
#define N 100
int main(){
    FILE *fpin; 
    FILE *fpout; 
    char str[N+1]; 
    int row = 1;
    fpin = fopen("d://myp.cpp", "r"); 
    fpout = fopen("d://new_myp.cpp", "w+"); 
    fgets(str, N, fpin); 
    while(!feof(fpin)) {
    fprintf(fpout, "%d %s\n", row, str);
    row++; 
    fgets(str, N, fpin); 
    } 
    fclose(fpin); 
    fclose(fpout);
}