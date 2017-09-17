#include<stdio.h>

void main()
{
    FILE *fp;  //文件指针
    fp = fopen("1.txt","r");
    /*格式化数据写入文件*/
    //if(fp)
        //fprintf( fp, "\n%s\n", "hello world!!!");

    char c;
    while(c=fgetc(fp)!=EOF)
        printf("%c\n",c);

    fclose(fp);
}
