/*单链表的结构定义*/

typedef int ElemType;

//结点定义
typedef struct Node{
    ElemType data;
    struct Node *next;
} Node,*LinkList;
