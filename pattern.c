#include<stdio.h>
int main()
{
    int i,j,k;
    char a='A';
    for(i=a;i<='E';i++)
    {
        for(j=a;j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
}
