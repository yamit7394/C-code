#include<stdio.h>
int main()
{
    int n,count1,count2,count3;
    count1=count2=count3=0;
    printf("Enter size of array= ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter %d elements in the array= ",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
            count1++;
        else if(arr[i]>0)
            count2++;
        else
            count3++;
    }
    printf("\nNumber of zeros= %d",count1);
    printf("\nNumber of +ve numbers= %d",count2);
    printf("\nNumber of -ve numbers= %d",count3);
    return 0;
}
