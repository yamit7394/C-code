#include<stdio.h>
int facto(int a)
{
    int fact=1;
    while(a>0)
    {
        fact=fact*a;
        a--;
    }
    return fact;
}
int main()
{
    int i;
    float r=0;
    for(i=1;i<15;i++)
    {
        r+=(float)i/(facto(i));
    }
    printf("%f",r);
}
