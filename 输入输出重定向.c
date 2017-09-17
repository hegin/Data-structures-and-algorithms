#include<stdio.h>

int main()
{
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    int i,num;
    for(i=0;i<11;i++)
    {
        scanf("%d",&num);
        printf("%d\n",num);
    }

    return 0;
}
