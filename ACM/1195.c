#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu{
    int score,year;
    char number[40], name[40], sex[1];
    struct stu *next,*prev;
};
/*int main(void){
    struct stu a[10110];
    int i=0;
    char *p = "end";
    while(~scanf("%s",a[i].number)){
        if(strncmp(a[i].number,p,3)==0)
            break;
        else 
            scanf("%s%s%d%d", a[i].name, a[i].sex, &a[i].year, &a[i].score);
        i++;
    }
    i--;
    while(i >= 0){
        printf("%s %s %s %d %d\n", a[i].number, a[i].name, a[i].sex,a[i].year, a[i].score);
        i--;
    }
}*/
int main(int argc,char **argv){
    struct stu *head = NULL, *tail = NULL, *p, *q;
    char *m = "end", n[20];
    while (~scanf("%s",n)){
        if(strncmp(m,n,3)==0)
            break;
        else{
            p = (struct stu *)malloc(sizeof(struct stu));
            strcpy(p->number, n);
            scanf("%s%s%d%d", p->name, p->sex, &p->year, &p->score);
            if(head==NULL){
                head = p;
                p->prev = NULL;
            }
            else{
                tail->next = p;
                p->prev = tail;
            }
            p->next = NULL;
            tail = p;
        }
    }
    p = tail;
    while(p!=NULL){
        printf("%s %s %s %d %d\n", p->number, p->name, p->sex,p->year,p->score);
        p = p->prev;
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
