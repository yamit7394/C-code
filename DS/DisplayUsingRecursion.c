#include<stdio.h>
#include<stdlib.h>
typedef struct node NODE;
struct node
{
    int data;
    struct node *next;
};
NODE *start,*p;
void create(int a[],int n)
{
    start=(NODE*)malloc(sizeof(NODE));
    p=start;
    start->data=a[0];
    p=p->next;
    for(int i=1;i<n;i++)
    {
        p->data=a[i];
        p=p->next;
    }


}

void display(NODE *p)
{
    if(p!=NULL)
    {
        printf("%d\n",p->data);
        display(p->next);
    }
;
}
int main()
{
    int n;
    printf("Enter the size = ");
    scanf("%d",&n);

    int a[n];
    printf("Enter the element in the array= ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    create(a,n);
    display(start);
}
