#include <stdio.h>
#include <stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}node,linklist;
linklist* creat_linklist(); //建立链表
void print_linklist(linklist *head); //打印链表
void reverse_linklist(linklist *head);  //反转链表
void destory_linklist(linklist *head);  //删除链表
int main(){
    char ch;
    linklist *head=(node*)malloc(sizeof(node));
    head->next = NULL;
    do{
        printf("请输入操作\n");
        printf("1:创建链表\n");
        printf("2:输出链表\n");
        printf("3:翻转链表\n");
        printf("4:删除链表\n");
        printf("5:退出\n");
        scanf("%c", &ch);
        if(ch=='1'){
            head=creat_linklist();
        }else if(ch=='2'){
            print_linklist(head);
        }else if(ch=='3'){
            reverse_linklist(head);
        }else if (ch == '4'){
            destory_linklist(head);
        }else if(ch=='5'){
            continue;
        }else{
            printf("没有该操作请重新输入\n");
        }
        getchar();
    } while(ch != '5');
    printf("程序结束\n");
    system("pause");
}
linklist* creat_linklist(){
    node *p=NULL,*end;
    linklist *head=(node*)malloc(sizeof(node));
    int n,temp; 
    end = head;
    printf("请输入链表中数据的个数\n");
    scanf("%d", &n);
    printf("请输入链表中的数据\n");
    while(n--){
        scanf("%d", &temp);
        p = (node *)malloc(sizeof(node));
        p->data = temp;
        p->next = NULL;
        end->next = p;
        end = p;
    }
    end->next = NULL;
    return head;
}
void print_linklist(linklist *head){
    if(head->next==NULL){
        printf("没有链表存在\n");
    }else{
        node *p=head->next;
        while(p){
            printf("%d ",p->data);
            p = p->next;
        }
        printf("\n");
    }
}
void reverse_linklist(linklist *head){
    if(head->next==NULL){
        printf("没有链表存在\n");
    }else{
        node *p = head->next, *q;
        head->next = NULL;
        while(p){
            q = p;
            p = p->next;
            q->next = head->next;
            head->next = q;
        }
    }
}
void destory_linklist(linklist *head){
    if(head->next==NULL){
        printf("没有链表存在\n");
    }else{
        node *p = head->next, *q;
        head->next = NULL;
        while(p){
            q = p;
            p = p->next;
            free(q);
        }
    }
}
