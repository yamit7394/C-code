#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,sum=0;
    int *ar;
	printf("Enter the number= ");
	scanf("%d",&n);
	ar=(int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++)
    {
        *(ar+i)=i+1;
        sum=sum+*(ar+i);
    }
    printf("\nSum= %d",sum);
	return 0;
}



