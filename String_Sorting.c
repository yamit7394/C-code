#include<stdio.h>
#include<string.h>
void myswap(char *s1,char *s2)
{
    int i=0;
    while(s2[i] != '\0')
    {
        *(s1+i)=*(s2+i);
        i++;
    }
}
int main()
{
    char str[5][50],t[50];
    int i,j;
    for(i=0;i<5;i++)
        gets(str);
    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(strcmp(str[j-1],str[j])>0)
            {
                myswap(t[50],str[j-1]);
                myswap(str[j-1],str[j]);
                myswap(str[j],t[50]);
            }
        }
    }
}
