#include<stdio.h>

void main()
{
    FILE *fp;  //�ļ�ָ��
    fp = fopen("1.txt","r");
    /*��ʽ������д���ļ�*/
    //if(fp)
        //fprintf( fp, "\n%s\n", "hello world!!!");

    char c;
    while(c=fgetc(fp)!=EOF)
        printf("%c\n",c);

    fclose(fp);
}
