#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    FILE *fp,*fp2,*fp3;
    fp=fopen("input.txt","r");
    fp2=fopen("even.txt","w+");
    fp3=fopen("odd.txt","w+");
    if(fp==NULL)
        printf("Not found.....");
    else
    {
        while((fscanf(fp,"%d",n))!=-1)
        {
            if(n%2==0)
                fprintf(fp2,"%d",n);
            else
                fprintf(fp3,"%d",n);
        }
    }
    fclose(fp);
    fclose(fp2);
    fclose(fp3);
}
