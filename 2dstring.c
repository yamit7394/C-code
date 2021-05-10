#include<stdio.h>
struct student{
    int i;
    float j;
};
int main()
{
    struct student *p;
    struct student s[3];
    p=s;
    for(int k=0; k<3;k++)
    {
        scanf("%d%f",&p[k].i,&p[k].j);
    }
    p=s;
    for(int k=0; k<3;k++)
    {
        printf("%d %f\n",p[k].i,p[k].j);
    }
    return 0;
}

