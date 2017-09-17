#include<stdio.h>

void main()
{
    int i,j;
    char a[] = "0123456789";
    char s[] = "789";

    for( i=0; a[i]!=0; i++ )
    {
        for( j=0; s[j]!=0; j++)
            if( a[i+j]!= s[j] ) break;
        if( s[j]==0 )
            printf("%d\n",i);
    }
}
