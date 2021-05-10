 #include<stdio.h>
int main()
{
    int i,j,n,temp;
    printf("Enter the size of a NxN matrix= ");
    scanf("%d",&n);
    int a[n][n];
    printf("Enter the %d element in the %dx%d matrix= ",n*n,n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Before rotation: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
      printf("\n");
    }


    for(i=0;i<n;i++)
    {
        int l;
        for(j=0,l=n-1;j<l;j++)
        {
            temp=a[i][j];
            a[i][j]=a[i][l];
            a[i][l]=temp;
            l--;

        }
    }

    for(i=0;i<n;i++)
    {
        int l;
        for(j=0,l=n-1;j<l;j++)
        {
            temp=a[j][i];
            a[j][i]=a[l][i];
            a[l][i]=temp;
            l--;

        }
    }



    printf("\nAfter rotation: \n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
