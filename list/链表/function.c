#include<stdio.h>
#include<malloc.h>
#include "LinkList.h"

//������Ĵ���(ͷ�巨)
init_LinkList( LinkList *L, int n )
{
    LinkList p;
    int i;

    *L = (LinkList)malloc(sizeof(LinkList));
    (*L)->next =NULL;

    printf("������%d�������ݣ�\n",n);
    for( i=0; i<n; i++ )
    {
        p = (LinkList)malloc(sizeof(Node));
        scanf("%d",&p->data);
        p->next = (*L)->next;
        (*L)->next = p;
    }
}

//��ӡ������
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
