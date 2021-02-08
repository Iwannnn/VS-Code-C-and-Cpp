#include <stdio.h>
struct stu{
    char num[1000],name[1000];
    int score;
};
int main(int agrc,char **argv){
    int n,i=0,maxi=0,max,mini=0,min;
    scanf("%d", &n);
    struct stu s[100];
    scanf("%s%s%d", s[i].num, s[i].name, &s[i].score);
    max = s[i].score;
    min = s[i].score;
    for (i = 1; i < n;i++){
        scanf("%s%s%d", s[i].num, s[i].name, &s[i].score);
        if(s[i].score>max){
            maxi = i;
            max = s[i].score;
        }
        if(s[i].score<min){
            mini = i;
            min = s[i].score;
        }
    }
    printf("%s %s %d\n", s[maxi].num, s[maxi].name, s[maxi].score);
    printf("%s %s %d\n", s[mini].num, s[mini].name, s[mini].score);
    return 0;
}