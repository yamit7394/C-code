#include<stdio.h>
int main()
{
    int a,b,r;
    int i;
    a=0;
    b=1;
    while(a<100)
    {
        printf("%d ",a);
        r=a+b;
        a=b;
        b=r;
    }
}
