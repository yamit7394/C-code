#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter the size of NxN matrix= ");
    scanf("%d",&n);
        int mat1[n][n];
        int mat2[n][n];
        printf("Enter the %d element in the first %dx%d matrix= ",n*n,n,n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("Enter the %d element in the second %dx%d matrix= ",n*n,n,n);
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }

//Addition of two matrices
        int sum[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
               sum[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        printf("\n\nSum of matrices= ");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
               printf("%d,",sum[i][j]);
            }
        }


//Multiplication
int mul[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                mul[i][j]=0;
                for(k=0;k<n;k++)
                {
                    mul[i][j]+=(mat1[i][k]*mat2[k][j]);
                }

            }
        }
        printf("\n\nMultiplication of two matrices is= ");
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d,",mul[i][j]);
            }
        }


}
