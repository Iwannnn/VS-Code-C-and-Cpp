#include <stdio.h>
#include <stdlib.h>
struct stu{
    int num,score[5],all,ave;
    char name[100];
}temp;
int main(int argc,char **argv){
    int n,i,j;
    printf("������ѧ��������");
    scanf("%d", &n);
    struct stu *p= (struct stu*)malloc(sizeof(struct stu) * n);
    struct stu *t = p;
    for (i = 0; i < n;i++){
        printf("������ѧ��ѧ�š�������5�ſγɼ���");
        scanf("%d%s%d%d%d%d%d",&p->num,\
        p->name,&p->score[0], &p->score[1]\
        ,&p->score[2], &p->score[3], &p->score[4]);
        p->all = 0;
        for (j = 0; j < 5;j++)
            p->all += p->score[j];
        p->ave = p->all / 5;
        p++;
    }
    p = t;
    for (i = 0; i < 5;i++){
        for (j = 4; j>i;j--){
            if((p+j)->ave>(p+j-1)->ave){
                temp = *(p + j);
                *(p + j) = *(p + j - 1);
                *(p + j - 1) = temp;
            }
        }
    }
    p = t;
    printf("�����ĳɼ����α�\n����  ѧ��  ����        �ɼ�1   �ɼ�2   �ɼ�3   �ɼ�4   �ɼ�5   �ܷ�   ƽ����\n");
    for (i = 0; i < 5;i++){
        printf("%d num:%3d name:%-10s score1:%3d score2:%3d score3:%3d score4:%3d score5:%3d all:%3d ave:%3d\n",\
        i,p->num,p->name,p->score[0], p->score[1],p->score[2], p->score[3], p->score[4],p->all,p->ave);
        p++;
    }
    free(p);
    system("pause");
    return 0;
}