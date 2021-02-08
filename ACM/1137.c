#include <stdio.h>
#include <string.h>
int main(void){
    char a[101];
    int n;
    while(gets(a)!=NULL){
        int i = 0,m[4]={0};
        n = strlen(a);
        if(n<=0)
            return 0;
        for(i=0;a[i]!='\0';i++){
            if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
                m[0]++;
            else if((a[i]>='0'&&a[i]<='9'))
                m[1]++;
            else if (a[i] == ' ')
                m[2]++;
            else
                m[3]++;
        }
        printf("%d %d %d %d\n", m[0], m[1], m[2], m[3]);
    }
    return 0;
}