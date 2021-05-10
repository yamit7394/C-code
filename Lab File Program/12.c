#include<stdio.h>
#include<conio.h>
#define F fflush(stdin)
struct phonebook
{
    char number[12];
    char name[20];
};
int Insert(struct phonebook *p, int *size)
{
    int length = 0;
    char op;
    struct phonebook *i;
    for(i = p; i < p + *size; i++)
    {
        printf("\n Enter Name : ");
        F;
        gets(i->name);

        printf("\n Enter Mobile Number : ");
        F;
        gets(i->number);

        printf("\n Added Successfully... \n");
        F;
        length += 1;
        printf("\n Do you want to insert more ? (y/n) : ");
        F;
        Rescan:
        scanf("%c",&op);
        F;
        if(op == 'y')
            continue;
        else if(op == 'n')
            break;
        else
        {
            printf("Invalid Input. Try Again : ");
            F;
            goto Rescan;
        }
    }
    return length;
}
void Print(struct phonebook *p, int *length)
{
    struct phonebook *i;
    int j = 1;
    for(i = p; i < p + *length; i++)
    {
        F;
        printf("\n %s = %s",i->name,i->number);
        F;
    }
}
int main()
{
    int size,length = 0,choice;
    printf("Enter Size of Phone book : ");
    scanf("%d",&size);

    struct phonebook P[size];
    L:
    printf("\n\n 1. Read Phonebook.\n 2. Modify Phonebook.\n 3. Delete Phonebook.\n 4. Insert New Phonebook.\n 5. Exit\n");
    F;
    printf("\nEnter your choice : ");
    F;
    scanf("%d",&choice);
    switch(choice)
    {
        case 1 : Print(P, &length);
                 goto L;
        case 2 : //modify();
                 break;
        case 3 : //Delete();
                 break;
        case 4 : length = Insert(P, &size);
                 goto L;
        case 5 : exit(0);

        default: printf("\nInvalid Choice.\n");
                 F;
                 goto L;
    }
}
