#include <stdio.h>
#include <string.h>
int main(){
    char str[999];
    int l,i,left,right;
    while(~scanf("%s",str)){
        l = strlen(str);
        left = 0;
        right=0;
        for (i = 0; i < l;i++){
            if(str[i]=='(')
                left++;
            else if(str[i]==')')
                right++;
        }
        if (left==right) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}