#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stu{
    int n, score;
    long long int num;
    struct stu *next;
};
int main(){
    int Q,num=0,m,k;
    scanf("%d", &Q);
    struct stu *p,*q,*r,*head;
    while(Q--){
        scanf("%d", &m);
        if(m==1){
            p = (struct stu *)malloc(sizeof(struct stu)*1);
            p->n = num++;
            scanf("%lld%d", &p->num, &p->score);
            if(head==NULL)
                head = p;
            else{
                for (q = head; q ->next!= NULL;q=q->next){
                    r = q->next;
                    if(r->num>p->num&&q->num<p->num){
                        p->next = r;
                        q->next = p;
                        break;
                    }
                }
                if(q->next==NULL){
                    q->next = p;
                    p->next = NULL;
                }
            }
        }else if(m==2){
            p = head;
            scanf("%d", &k);
            while(p!=NULL){
                if(p->n==k)
                    printf("%d\n", p->score);
                p = p->next;
            }
        }
    }
    p = head;
    while (p != NULL){
        q = p;
        p = p->next;
        free(q);
    }
}