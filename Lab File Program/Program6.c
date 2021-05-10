#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

    return 0;
}
int main()
{
    int a,b;
    printf("Enter two numbers= ");
    scanf("%d%d",&a,&b);
    printf("\nBefore swap= %d,%d",a,b);
    swap(&a,&b);
    printf("\nAfter swap= %d,%d",a,b);
    return 0;
}
