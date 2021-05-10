#include<stdio.h>
int main()
{
    int i,j,temp;
    int num[10]={5,22,4,88,6,3,2,5,9,2};
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(num[i]<num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
        printf("%d ",num[i]);
    return 0;
}
