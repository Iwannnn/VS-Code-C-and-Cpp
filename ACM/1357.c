#include <stdio.h>
#include <string.h>
int main(){
    char s[250];
    int i,n,l,maxi,ans[250];
    scanf("%s%d", s,&n);
    l = strlen(s);
    for (i = 0; i < l;i++)
        ans[i] = s[i] - '0';
    while (n--){
        maxi = 0;
        for (i = 1; i < l; i++)
            if (ans[i] > ans[maxi])
                maxi = i;
        ans[maxi] = -1;
    }
    for (i = 0; i < l;i++)
        if(ans[i]>=0&&ans[i]<=9)
            printf("%d", ans[i]);
}