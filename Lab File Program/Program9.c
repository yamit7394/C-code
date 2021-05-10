#include<stdio.h>
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return(fib(n-2)+fib(n-1));
}
int main()
{
    int n;
    printf("Enter number to print fibonacci series =");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}
