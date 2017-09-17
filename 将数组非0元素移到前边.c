#include<stdio.h>
#include<string.h>

int main()
{
    int temp;
    int i;  //计数器变量
    int free=0; //记录非零元素的索引
    int num[15] = {0,0,0,0,0,5,6,5,8,0,2,2,2,1,0};

    /*数组倒置*/
    for( i=0; i<=15/2; i++ )
    {
        temp = num[i];
        num[i] = num[15-1-i];
        num[15-1-i] = temp;
    }

    for( i=0; i<15; i++ )
        printf("%d ",num[i]);

    printf("\n");

    for( i=0; i<15; i++ )
        if( num[i]!= 0 )
        {
            if( i!= free)
            {
                num[free] = num[i];
                num[i] = 0;
            }
            free++;
        }

    for( i=0; i<15; i++ )
        printf("%d\n",num[i]);
    return 0;
}
