#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define flush fflush(stdin)
struct phone
{
	char mobNumber[12];
	char name[50];
};
//Add into phonebook
int add(struct phone *na,int *size)//accepting first address of array and size of array
{
    int len=0;
    int i;
    char choice;
    while(i<*size)
    {
        printf("Enter name= ");
        flush;
        gets(na[i].name);          //Accessing name from structure by a pointer
        printf("Enter number= ");
        flush;

        gets(na[i].mobNumber);
        i++;
        printf("Added successfully.....\n");
        len++;
        again:
        printf("You want to add more (y,n)= ");
        flush;
        scanf("%c",&choice);
        if(choice=='y')
            continue;
        else if(choice=='n')
            break;
        else
        {
            printf("Wrong choice...Again\n");
            flush;
            goto again;
        }

    }
    return len;
}
//Display the phonebook


void display(struct phone *n,int *len)
{
    int i=0,j;
    while(i < *len)
    {
        j = i+1;
        printf("\n %d. ",j,"");
        flush;
        printf("%s = %s",n[i].name,n[i].mobNumber);
        i++;
    }
    printf("\n");
    flush;
}
void modify(struct phone *p, int *length)
{
    int num;
    char se;
    char name[20];
    char number[12];
    display(p, length);
    printf("\n Select Person to Modify : ");
    flush;
    scanf("%d",&num);
    printf("\n Select Element to Modify (Name = N, Phone No = P) : ");
    flush;
    Rescan:
    scanf("%c",&se);
    flush;
    if(se == 'N' || se == 'n')
    {
        printf("\n Enter New Name : ");
        flush;
        gets(name);
        strcpy(p[num-1].name, name);
        printf("\n Value updated ...\n");
        flush;
    }
    else if(se == 'P' || se == 'p')
    {
        printf("\n Enter New Number : ");
        flush;
        gets(number);
        strcpy(p[num-1].mobNumber, number);
        printf("\n Value updated ...\n");
        flush;
    }
    else
    {
        printf("Invalid Input. Try Again : ");
        flush;
        goto Rescan;
    }
}
int main()
{
    int size,len=0;
    printf("Enter size of the phonebook=");
    scanf("%d",&size);
    struct phone ph[size];
    struct phone n;
    again:
    printf("\n1. Add Details\n2. Display detail\n3. Modify\n4. Exit\n");
    flush;
    int choice;
    printf("\nEnter choice= ");
    flush;
    scanf("%d",&choice);

   switch(choice)
   {
       case 1:  len=add(ph,&size);
                goto again;
       case 2:  display(ph,&len);
                goto again;
       case 3:  modify(ph,&len);
                goto again;
       case 4: exit(0);

       default: printf("Wrong choice....\n");
                flush;
                goto again;
   }
	return 0;
}
