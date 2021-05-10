#include<stdio.h>
int main()
{
    int *p;
    int n,i,sum=0;
    scanf("%d",&n);
    p=(int *)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+*(p+i);
    }
    printf("average= %d",sum/n);
}
