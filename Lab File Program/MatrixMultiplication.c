#include<stdio.h>
int main()
{
    int i,j,k,n1,m1,n2,m2;
    printf("Enter the size of first NxM matrix= ");
    scanf("%d%d",&n1,&m1);


    printf("Enter the size of second NxM matrix= ");
    scanf("%d%d",&n2,&m2);

        int mat1[n1][m1];
        int mat2[n2][m2];
        printf("Enter the %d element in the first %dx%d matrix= ",n1*m1,n1,m1);
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
                scanf("%d",&mat1[i][j]);
            }
        }
        printf("Enter the %d element in the second %dx%d matrix= ",n2*m2,n2,m2);
        for(i=0;i<n2;i++)
        {
            for(j=0;j<m2;j++)
            {
                scanf("%d",&mat2[i][j]);
            }
        }

//Addition of two matrices
    if((n1!=n2) || (m1!=m2))
    {
        printf("Can't add matrices of different-different order");
    }
    else
    {
        int sum[n1][m1];
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
               sum[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
        printf("\n\nSum of matrices= ");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m1;j++)
            {
               printf("%d,",sum[i][j]);
            }
        }

    }

//Multiplication
    int mul[n1][m2];

    if((m1!=n2))
    {
        printf("\n\nCan't multiply these matrices");
    }
    else
    {
        int sum;
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                mul[i][j]=0;

                sum=0;
                for(k=0;k<m1;k++)
                {
                    sum+=(mat1[i][k]*mat2[k][j]);
                }
                mul[i][j]=sum;

            }

        }
        }
        printf("\n\nMultiplication of two matrices is= ");
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
            {
                printf("%d,",mul[i][j]);
            }
        }



}
