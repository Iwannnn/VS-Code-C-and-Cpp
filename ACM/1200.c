#include <stdio.h>
struct stu{
    int num, chinese, math, enlish,all;
} s[1000], temp;
int main(int argc,char *argv[]){
    int n;
    while(~scanf("%d",&n)){
        int i,j;
        for (i = 1; i <= n;i++){
            s[i].num = i;
            scanf("%d%d%d", &s[i].chinese, &s[i].math, &s[i].enlish);
            s[i].all = s[i].chinese + s[i].math + s[i].enlish;
        }
        for (i = 1; i <= n;i++){
            for (j = n; j > i;j--){
                if(s[j].all>s[j-1].all){
                    temp = s[j];
                    s[j] = s[j - 1];
                    s[j - 1] = temp;
                }else if(s[j].all==s[j-1].all){
                    if(s[j].chinese>s[j-1].chinese){
                        temp = s[j];
                        s[j] = s[j - 1];
                        s[j - 1] = temp;
                    }
                }else if(s[j].chinese==s[j-1].chinese&&s[j].all==s[j-1].all){
                    if(s[j].num<s[j-1].num){
                        temp = s[j];
                        s[j] = s[j - 1];
                        s[j - 1] = temp;
                    }
                }
            }
        }
        for (i = 1; i <= 5;i++){
            printf("%d %d\n", s[i].num, s[i].all);
        }
    }
}