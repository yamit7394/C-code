#include<stdio.h>
int len(char *l)
{
    int a=0;
    while(*l != '\0')
    {
        a++;
        l++;
    }
}
int compare(char *s1,char *s2)
{
    if(len(s1)!=len(s2))
        printf("Not equal...");
    else
    {
        while(*s1!='\0')
        {
            if(*s1 != *s2)
                return 0;
            s1++;
            s2++;

        }
        return 1;
    }
}
int main()
{
    char s1[50],s2[50];
    gets(s1);
    gets(s2);
    int flag=0;
    if(flag==compare(s1,s2))
        printf("Not equal...");
    else
        printf("Equal...");
}
