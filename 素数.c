#include<stdio.h>

#define N 10001

void main()
{
    int i, j, a[N];
    for( i=2; i<N; i++ ) a[i] = 1;  //先假定所有数为素数
    for( i=2; i<N; i++)
        if( a[i] )
            for( j=i; i*j<N; j++ ) a[i*j] = 0; //索引的倍数一定不是素数

    for( i=2; i<N; i++ )
    {
        if( a[i] )
            printf("%d\n",i);    //打印出素数
    }
}
