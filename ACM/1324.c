#include <stdio.h>
#include <string.h>
int main(){
    int n,shu[666],l=1,jw;
    memset(shu, 0, sizeof(shu));
    shu[1] = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n;i++){
        jw = 0;
        for (int j = 1; j <=l;j++){
            if(j==1){
                shu[j] += i;
                jw = shu[j] / 10;
                shu[j] %= 10;
            }else{
                shu[j] += jw;
                jw = shu[j] / 10;
                shu[j] %= 10;
            }
        }
        if(jw>0){
            l++;
            shu[l] = jw;
        }
    }
    for (int i = l; i >= 1;i--)
        printf("%d", shu[i]);
}