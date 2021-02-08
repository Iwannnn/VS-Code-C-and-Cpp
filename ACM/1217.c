#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void change(char *p, int l){
    int i = 0;
    while(i<l){
        if(*(p+i)>='A'&&*(p+i)<='Z')
            *(p+i)+= 32;
        i++;
    }
}
int main(){
    char p[20],str[1000500];
    gets(p);
    gets(str);
    int l1 = strlen(p),l2=strlen(str),i,j,t=0,index;
    change(p, l1);
    change(str, l2);
    for (i = 0; i < l2;i++){
        for (j = 0; j < l1;j++){
            if(str[i+j]!=p[j])
                break;
        }
        if (j==l1){
            t++;
            if (t == 1)
                index = i;
        }
    }
    if(t)
        printf("%d %d\n", t, index);
    else
        printf("%d\n", -1);
    system("pause");
}