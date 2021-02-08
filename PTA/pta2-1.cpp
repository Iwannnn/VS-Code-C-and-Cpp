#include <iostream>
#include <string>
using namespace std;
struct Dog
{
	string no;
	int age;
	Dog *next;
};
Dog *head=NULL;
void *del(Dog *p)
{
	if(p!=NULL)
	{
		del(p->next);
		delete p;
	}
}
void display(Dog *p)
{
	if(p!=NULL)
	{
		cout<<p->no<<' '<<p->age<<endl;
		display(p->next);
	}
}

Dog *clear();
Dog *insert(string &no, int age);

int main()
{

	int task, age;
	string no;
	cin>>task;
	while(task>0)
	{
		switch(task)
		{
			case 1:
				cin>>no>>age;
				head=insert(no, age);
				display(head);
				break;
			case 2:
				head=clear();
				display(head);
				break;
		}
		cin>>task;
	}
	del(head);
	return 0;
}




Dog *insert(string &no,int age)
{
	Dog *ptr ,*ptr1, *ptr2;

	ptr2 = head;
	ptr = new Dog; 				/* ptr指向待插入的新的学生记录结点 */
	ptr->no=no;
	ptr->age=age;

	/* 原链表为空时的插入 */
	if(head == NULL)
	{
		head = ptr; 			/* 新插入结点成为头结点 */
		head->next = NULL;
	}
	else  					    /* 原链表不为空时的插入 */
	{
		while((ptr->age > ptr2->age) && (ptr2->next != NULL))
		{
			ptr1 = ptr2; 		/* ptr1, ptr2各后移一个结点 */
			ptr2 = ptr2->next;
		}
		if(ptr->age <= ptr2->age)  	/* 在ptr1与ptr2之间插入新结点 */
		{
			if(head == ptr2)  head = ptr;
			else ptr1->next = ptr;
			ptr->next = ptr2;
		}
		else 						    /* 新插入结点成为尾结点 */
		{
			ptr2->next = ptr;
			ptr->next = NULL;
		}
	}
	return head;
}


Dog *clear()
{
	Dog*p,*p1,*p2;
	bool n;
	if(head==NULL)return head;
	p=head;
	p1=p->next;
	p2=NULL;
	while(p->next!=NULL)
	{
		n=false;
		while(p1!=NULL)
		{
			if(p->no==p1->no)
			{
				if (p==head)
				{
					p=p->next;
					head=p;
					p1=p->next;
					p2=NULL;
				}
				else
				{
					p=p->next;
					p2->next=p;
					p1=p->next;
				}
				n=true;
				break;
			}
			p1=p1->next;
		}
		if(n==false)
		{
			p2=p;
			p=p->next;
			p1=p->next;
		}
	}
	return head;
}

