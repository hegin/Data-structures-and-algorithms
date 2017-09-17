#include<stdio.h>
#include<malloc.h>
#include"list.h"

#define ERROR 0
#define OK 1

//˳���Ĵ���
void create_SqList(SqList *L,int length)
{
    int k;
    L->length = length;
    printf("������%d���������ݣ�\n",length);
    for( k=0; k<L->length; k++ )
    {
        scanf("%d",&L->data[k]);
    }
}

//��ӡ˳���
void disp_SqList(SqList *L)
{
    int i;
    for( i=0; i<L->length; i++)
    {
        printf("%d  ",L->data[i]);
    }
    printf("\n");
}

//��˳����i��λ�ò���Ԫ��e
int insert_SqList( SqList *L, int i, ElemType e)
{
    int k;

    //�жϲ�������
    if( i<1 || i>L->length+1)
        return ERROR;
    //�ӵ�i��Ԫ�ص����Ԫ�أ������һ��λ��
    for( k=L->length-1; k>=i-1; k--)
    {
        L->data[k+1] = L->data[k];
    }
    L->data[i-1] = e;
    L->length = L->length + 1;
    return OK;
}

//ɾ��˳����е�i��Ԫ�أ�����e������ֵ
ElemType delete_SqList( SqList *L, int i, ElemType e )
{
    int k;

    if( i<1 || i>L->length)
        return ERROR;
    if( L->length==0)
        return ERROR;

    //ɾ����Ԫ�ص�ֵ
    e = L->data[i-1];
    //�ӵ�i+1��Ԫ�ص����Ԫ����ǰ�ƶ�һ��λ��
    if( i<L->length )
    {
        for( k=i; k<L->length; k++)
        {
            L->data[k-1] = L->data[k];
        }
    }

    L->length--;
    return e;
}


void main()
{
    SqList *L = (SqList*)malloc(sizeof(SqList));
    create_SqList( L, 10 );  //����
    disp_SqList( L );        //��ӡ

    int position;
    ElemType v;
    printf("������Ҫ����Ԫ�ص�λ�ã�\n");
    scanf("%d",&position);
    printf("������Ҫ����Ԫ�ص�ֵ��\n");
    scanf("%d",&v);
    insert_SqList( L, position, v); // ����
    disp_SqList( L );

    ElemType e;
    int pos;
    printf("������Ҫɾ��Ԫ�ص�λ�ã�\n");
    scanf("%d",&pos);
    e = delete_SqList( L, pos , e); //ɾ��
    disp_SqList( L );
}
