#include<stdio.h>

#define N 10001

void main()
{
    int i, j, a[N];
    for( i=2; i<N; i++ ) a[i] = 1;  //�ȼٶ�������Ϊ����
    for( i=2; i<N; i++)
        if( a[i] )
            for( j=i; i*j<N; j++ ) a[i*j] = 0; //�����ı���һ����������

    for( i=2; i<N; i++ )
    {
        if( a[i] )
            printf("%d\n",i);    //��ӡ������
    }
}
