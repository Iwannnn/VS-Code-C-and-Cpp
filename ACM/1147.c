#include <stdio.h>
#include <string.h>
int main(void){
    char a[1000];
    while(gets(a)){
        int words[26]={0},l;
        char m;
        l = strlen(a);
        for(int i=0;i<l;i++){
            if(a[i]>='A'&&a[i]<='Z')
                a[i] += 32;
            if(a[i]>='a'&&a[i]<='z')    
                words[a[i]-'a']++;
        }
        for (int i = 0; i < 26;i++){
            if(words[i]!=0){
                m = i + 'a';
                printf("%c: %d\n", m, words[i]);
            }
        }
        printf("\n");
    }
}