#include<stdio.h>
#include<string.h>
int main()
{
    char st[100];
    char st2[100];
    int len=0;
    printf("Enter first string= ");
    gets(st);
    printf("Enter second string= ");
    gets(st2);
    int i=0;
    while(st[len]!='\0')
    {
        len++;
    }
    printf("%d",len);
    i=0;
    while(st2[i] !='\0')
    {
        st[len]=st2[i];
        len++;
        i++;
    }
    st[len]='\0';
    puts(st);
    return 0;
}
