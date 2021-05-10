#include<stdio.h>
void main()
{
    FILE *fp;
    fp=fopen("file.txt","a+");
    int i,j,k,n=1;
    char a='A';
    if(fp==NULL)
        printf("NO file with this name present......");
    else
    {
        for(i=a;i<'Z';i+=2)
        {
            for(k='Y';k>i;k-=2)
            {
                fputc(' ',fp);
            }
            for(j=a;j<=i;j++)
            {
               fputc(j,fp);
            }
            fputc('\n',fp);
        }
    }
}
