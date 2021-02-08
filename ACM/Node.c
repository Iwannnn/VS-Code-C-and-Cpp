#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu{
    int num, score;
    char name[30];
    struct stu *next;
};
int main(int argc,char **argv){
    struct stu *head=NULL, *p,*tail,*q;
    int num,score;
    char name[30];
    printf("please enter student number:");
    scanf("%d%s%d", &num,name, &score);
    while(num!=0){
        p = (struct stu *)malloc(sizeof(struct stu));
        p->num = num;
        strcpy(p->name , name);
        p->score = score;
        if(head==NULL)
            head = p;
        else
            tail->next = p;
        p->next = NULL;
        tail = p;
        printf("please enter next student:");
        scanf("%d%s%d", &num,name, &score);
    }
    if(head==NULL){
        printf("no enter\n");
    }else{
        printf("here is student list:\n");
    }
    p = head;
    while(p!=NULL){
        printf("num:%d  name:%s  score:%d\n", p->num, p->name, p->score);
        p = p->next;
    }
    p = head;
    while(p!=NULL){
        q = p;
        p = p->next;
        free(q);
    }
    system("pause");
    return 0;
}