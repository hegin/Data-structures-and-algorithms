#include<stdio.h>
#include<malloc.h>
#include "LinkList.h"

//单链表的创建(头插法)
init_LinkList( LinkList *L, int n )
{
    LinkList p;
    int i;

    *L = (LinkList)malloc(sizeof(LinkList));
    (*L)->next =NULL;

    printf("请输入%d整型数据：\n",n);
    for( i=0; i<n; i++ )
    {
        p = (LinkList)malloc(sizeof(Node));
        scanf("%d",&p->data);
        p->next = (*L)->next;
        (*L)->next = p;
    }
}

//打印单链表
disp_LinkList(Node *head)
{
    while( !head )
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}

void main()
{
    LinkList *L=(LinkList)malloc(sizeof(LinkList));
    init_LinkList( *L, 10 );
    Node *head;
    disp_LinkList( head );
}
