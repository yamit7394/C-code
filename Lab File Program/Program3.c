#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter number to check = ");
    scanf("%d",&num);
    for(i=1;i<=num/2;i++)
    {
        if(num%i==0)
            sum=sum+i;
    }
    if(sum==num)
        printf("Perfect Number");
    else
        printf("Not a perfect number");
    return 0;
}
