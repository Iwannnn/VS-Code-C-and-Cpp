#include <stdio.h>
struct stu{
    char num[1000],name[1000];
    float score;
};
int main(){
    int n,i,j;
    scanf("%d", &n);
    struct stu s[100],temp;
    for (i = 0; i < n;i++)
        scanf("%s", s[i].num);
    for (i = 0; i < n;i++)
        scanf("%s", s[i].name);
    for (i = 0; i < n;i++)
        scanf("%f", &s[i].score);      
    for (i = 0; i < n;i++){
        for (j = n - 1; j > i;j--){
            if(s[j].score>s[j-1].score){
                temp = s[j];
                s[j] = s[j - 1];
                s[j - 1] = temp;
            }
        }
    }
    for (i = 0; i < n;i++)
        printf("%s %s %.2f\n", s[i].num, s[i].name, s[i].score);
    return 0;
}