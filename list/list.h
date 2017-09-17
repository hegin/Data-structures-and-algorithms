/*顺序表的结构定义*/
#define MAXSIZE 100

typedef int ElemType;

typedef struct{
    ElemType data[MAXSIZE];   //顺序表分配总空间大小
    int length;               //顺序表当前长度
}SqList;
