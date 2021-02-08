#include<iostream>
#include <string>
using namespace std;
struct Node{
    string name;
    int start;
    int end;
    Node *next;
};
Node* add(Node *head, Node *newnode){
    if(head==NULL){
        head = newnode;
        head->next = NULL;
        return head;
    }
    Node *p = head;
    Node *q = newnode;
    Node *r = NULL;
    while(p!=NULL&&p->start<q->start)
	{
		r=p;
        p = p->next;
    }
	if(p==head){
		Node *newhead=newnode;
		newhead->next=head;
		head=newhead;
	}else{
		r->next=q;
		q->next=p;
	}
	return head;
}
void display(Node *head){
    Node* p=head;
    Node *q=p->next;
    while(p->next!=NULL){
		while(q!=NULL){
			if(p->end>q->start){
					if(p->name[0]!='*')
						p->name.insert(0,1,'*');
					if(q->name[0]!='*')
						q->name.insert(0,1,'*');
				}
				q=q->next;
			}
			p=p->next;
			q=p->next;
		}
		p=head;
 		while(p!=NULL){
 			cout<<p->name<<" "<<p->start<<" "<<p->end<<endl;
            p = p->next;
        }
}
bool check(Node *head)
{
    if(head==NULL || head->next==NULL) return true;
    Node *p=head->next;
    if(head->start > p->start) return false;
    return check(p);
}
int main()
{
    Node *head=NULL, *p;
    int i, repeat;
    cin>>repeat;
    for(i=0;i<repeat;i++){
        p = new Node;
        cin>>p->name>>p->start>>p->end;
        p->next=NULL;
        head = add(head, p);
    }
    if(!check(head)) cout<<"ERROR"<<endl;
    display(head);
    return 0;
}