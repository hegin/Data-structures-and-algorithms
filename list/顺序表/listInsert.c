#include<stdio.h>
#include<malloc.h>
#include"list.h"

#define ERROR 0
#define OK 1

//顺序表的创建
void create_SqList(SqList *L,int length)
{
    int k;
    L->length = length;
    printf("请输入%d个整型数据：\n",length);
    for( k=0; k<L->length; k++ )
    {
        scanf("%d",&L->data[k]);
    }
}

//打印顺序表
void disp_SqList(SqList *L)
{
    int i;
    for( i=0; i<L->length; i++)
    {
        printf("%d  ",L->data[i]);
    }
    printf("\n");
}

//在顺序表第i个位置插入元素e
int insert_SqList( SqList *L, int i, ElemType e)
{
    int k;

    //判断插入条件
    if( i<1 || i>L->length+1)
        return ERROR;
    //从第i个元素到最后元素，向后移一个位置
    for( k=L->length-1; k>=i-1; k--)
    {
        L->data[k+1] = L->data[k];
    }
    L->data[i-1] = e;
    L->length = L->length + 1;
    return OK;
}

//删除顺序表中第i个元素，并用e返回其值
ElemType delete_SqList( SqList *L, int i, ElemType e )
{
    int k;

    if( i<1 || i>L->length)
        return ERROR;
    if( L->length==0)
        return ERROR;

    //删除的元素的值
    e = L->data[i-1];
    //从第i+1个元素到最后元素向前移动一个位置
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
    create_SqList( L, 10 );  //创建
    disp_SqList( L );        //打印

    int position;
    ElemType v;
    printf("请输入要插入元素的位置：\n");
    scanf("%d",&position);
    printf("请输入要插入元素的值：\n");
    scanf("%d",&v);
    insert_SqList( L, position, v); // 插入
    disp_SqList( L );

    ElemType e;
    int pos;
    printf("请输入要删除元素的位置：\n");
    scanf("%d",&pos);
    e = delete_SqList( L, pos , e); //删除
    disp_SqList( L );
}
