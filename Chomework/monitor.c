#include <stdio.h>
#include <string.h>
struct stu{
    char name[10];
    int vote;
};
int main(int argc,char **argv){
    struct stu s[5],temp;
    int i,j;
    char t[10];
    for (i = 0; i < 5;i++){
        scanf("%s", s[i].name);
        s[i].vote = 0;
    }
    i = 1;
    while(i<=5){
        printf("������Ͷ��˭");
        scanf("%s", t);
        for (j = 0; j < 5;j++){
            if(strcmp(t,s[j].name)==0){
                s[j].vote++;
                break;
            }
        }
        if(j==5)
                printf("�����ǷǷ�ͶƱ\n");
        else
            i++;
    }
    for (i = 0; i < 5;i++){
        for (j = 4; j > i;j--){
            if(s[j].vote>s[j-1].vote){
                temp = s[j];
                s[j] = s[j - 1];
                s[j - 1] = temp;
            }
        }
    }
    printf("��ѡ��   Ʊ��\n");
    for (i = 0; i < 5;i++)
        printf("%-10s%d\n", s[i].name, s[i].vote);
    return 0;
}
