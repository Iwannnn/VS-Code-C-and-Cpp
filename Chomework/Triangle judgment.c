#include <stdio.h>
#include <stdlib.h>
#include <math.h>
# define LIMIT 1e-3
int main() {
    char f='y';
    while(f=='y'||f=='Y'){
        int flag = 0;
        float a, b, c;
        printf("�����������ε�����a,b,c\n");
        scanf("%f,%f,%f", &a, &b, &c);
        if ((a + b) > c && (a + c) > b && (b + c) > a) {
            if (fabs(a - b) <= LIMIT && fabs(a - c) <= LIMIT && fabs(b - c) <= LIMIT)
            {
                printf("�ȱ�");
                flag = 1;
            }
            else if (fabs(a - b) <= LIMIT || fabs(a - c) <= LIMIT || fabs(b - c) <= LIMIT) {
                printf("����");
                flag = 1;
            }
                if(fabs(pow(a,2)+pow(b,2)-pow(c,2))<LIMIT||fabs(pow(a,2)+pow(c,2)-pow(b,2))<LIMIT||fabs(pow(c,2)+pow(b,2)-pow(a,2))<LIMIT) {
                printf("ֱ��");
                flag = 1;
            }
        }else{
            printf("���ܹ���");
            flag = 1;
        }
        if(flag==0) {
            printf("һ��");
        }
        printf("������\n");
        printf("Do you want to continue(Y/N or y/n)?\n");
        getchar();
        f=getchar();
    }
    printf("Goode Bye!\n");
    system("pause");
    return 0;
}
