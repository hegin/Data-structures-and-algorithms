#include<stdio.h>

/* a^n % p */
int fun(int a, int n, int p)
{
    int i;
    int x=1;
    for( i=0; i<n; i++ ) x = (x*a) %p;

    return x;
}

int main()
{
    //printf("%d\n",fun(2,100000,2));

    int i,j;
    int count=0; //计数
    int a[1000*10];
    for(i=2;i<1000*10;i++) a[i] = 1; //先假设所有为素数
    for(i=2;i<1000*10;i++)
    {
        if(a[i] == 1)
        {
            for(j=i;i*j<1000*10;j++)
                    a[i*j] = 0;
        }
    }
    for(i=2;i<1000*10;i++)
    {
        if( a[i])
            count++;
        if(count == 1009)
        {
            printf("%d\n",i);
            break;
        }
    }



    return 0;
}
