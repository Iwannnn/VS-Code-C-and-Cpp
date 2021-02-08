#include <stdio.h>
struct stu{
    char name[100];
    int ac;
}temp;
int main(int argc,char **argv){
    int t,i,j,k,l;
    scanf("%d", &t);
    for (i = 1; i <= t;i++){
        scanf("%d", &k);
        struct stu s[k];
        for (j = 0; j < k;j++)
            scanf("%s%d", s[j].name, &s[j].ac);
        for (j = 0; j < k;j++){
            for (l = k - 1; l > j;l--){
                if(s[l].ac>s[l-1].ac){
                    temp = s[l];
                    s[l] = s[l - 1];
                    s[l - 1] = temp;
                }
            }
        }
        for (j = 0; j < k;j++)
            printf("%s\n", s[j].name);
    }
}