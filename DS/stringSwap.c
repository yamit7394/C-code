#include<stdio.h>
#include<string.h>
int main()
{
    char ar[5][30];
    printf("Enter 5 string= ");
    for(int i=0;i<5;i++)
    {
        gets(ar[i]);
    }

    int l=strlen(ar[2]);
    //printf("%d",l);
    //printf("%c",ar[2][0]);
    char temp;
    temp=ar[2][0];
    ar[2][0]=ar[2][l-1];
    ar[2][l-1]=temp;
    printf("\n\n%s",ar[2]);

    int l2=strlen(ar[3]);
    temp=ar[3][1];
    ar[3][1]=ar[3][l2-2];
    ar[3][l2-2]=temp;
    printf("\n\n%s",ar[3]);

    return 0;
}
