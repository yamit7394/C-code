#include<stdio.h>
int main()
{
    int i,j,k,max,l=2;
    int a[3][3]={9,8,7,6,5,4,3,2,1};
    printf("Before rotation: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++)
    {
        k=2;
        for(j=0;j<(3-i);j++)
        {
            max=a[k][l];
            a[k][l]=a[i][j];
            a[i][j]=max;
            k=k-1;
        }
        l=l-1;
    }
    printf("\nAfter rotation: \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
