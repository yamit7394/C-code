#include<stdio.h>
int main()
{
    int n1,n2,m1,m2,i,j,k,sum=0;
    printf("Enter size of both matrix= ");
    scanf("%d%d%d%d",&n1,&m1,&n2,&m2);
    int mat1[n1][m1],mat2[n2][m2],mul[n1][m2];
    printf("Enter elememt in the first matrix= ");
    for(i=0;i<n1;i++)
        for(j=0;j<m1;j++)
            scanf("%d",&mat1[i][j]);
    printf("Enter elememt in the second matrix= ");
     for(i=0;i<n2;i++)
        for(j=0;j<m2;j++)
            scanf("%d",&mat2[i][j]);
    if(m1!=n2)
        printf("Can't maultiply matrices of different order....");
    else
    {
        for(i=0;i<n1;i++)
            for(j=0;j<m2;j++)
            {
                mul[i][j]=0;
                sum=0;
                for(k=0;k<m1;k++)
                    sum+=mat1[i][k]*mat2[k][j];
                mul[i][j]=sum;
            }
        for(i=0;i<n1;i++)
        {
            for(j=0;j<m2;j++)
                printf("%d ",mul[i][j]);

            printf("\n");
        }
    }
}
