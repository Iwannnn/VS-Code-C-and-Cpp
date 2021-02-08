#include <stdio.h>
#include <stdlib.h>
struct stu{
  long long int id;
  int score;
  struct stu *next;
};
int main()
{
    int Q,T=1;
    scanf("%d", &Q);
	struct stu *head;
	while(Q--){
		int c;
		scanf("%d", &c);
        if(c==1){
		    if(T==1){
				struct stu* p=(struct stu* )malloc(sizeof(struct stu));
				scanf("%lld%d", &p->id,&p->score);
				p->next = NULL;
				head = p;
				T=0;
		    }else{
			    struct stu* p=(struct stu* )malloc(sizeof(struct stu)),*a=NULL,*b=head;
				scanf("%lld%d", &p->id,&p->score);
				while (b->id < p->id && b->next != NULL){
					a = b;
					b = b->next;
				}
				if((p->id)<(b->id)){
					if(b==head){
						p->next = head;
						head = p;
					}else{
						p->next = b;
						a->next = p;
					}
				}else{
					b->next = p;
					p->next = NULL;
				}
			}
	    }else if(c==2){
			int k;
			scanf("%d", &k);
			int count=1;
			struct stu* p=head;
			while(p!=NULL){
				if(count==k){
				printf("%d\n", p->score);
				break;
				}
				p=p->next;
            	count++;
			}  
	  	}
  	}
  	return 0;
}