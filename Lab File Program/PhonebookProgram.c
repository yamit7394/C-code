#include <stdio.h>

#define PHONEBOOK_SIZE 512
#define FLUSH fflush(stdin); // fpurge(stdin) for linux

typedef struct
{
    char name[32 + 1];
    char mobile[32 + 1];
}PHONEBOOK, *PPHONEBOOK;

void AddContact(PHONEBOOK *);
void RemoveContact(PHONEBOOK *);
void SearchContact(PHONEBOOK *);
void DisplayContact(PHONEBOOK *);

short selection;
short size;

int main(int argc, char **argv)
{
    PHONEBOOK pb[PHONEBOOK_SIZE];

    selection = 0;
    size = 0;

    for( ; ; )
    {
        printf("1 - Add contact\n"
               "2 - Remove contact\n"
               "3 - Search contact\n"
               "4 - Display all contacts\n"
               "0 - Exit\n\n"
               "Select an option: ");

        FLUSH;
        scanf("%d", &selection);

        switch(selection)
        {
            case 1:
                AddContact(&pb);
                break;
            case 2:
                RemoveContact(&pb);
                break;
            case 3:
                SearchContact(&pb);
                break;
            case 4:
                DisplayContact(&pb);
                break;
            case 0:
                printf("Thanks for using...\n");
                return 0;
            default:
                printf("Invalid option selected...\n");
                break;
        }

        printf("\n");
    }
    return 0;
}

void AddContact(PHONEBOOK *pb)
{
    for( ; ; )
    {
        printf("Enter name: ");
        FLUSH;
        scanf("%32[^\n]", pb[size].name);

        printf("Enter mobile number: ");
        FLUSH;
        scanf("%32[^\n]", pb[size].mobile);

        printf("Confirm (Y - yes | N - no | B - back): ");
        FLUSH;
        scanf("%c", &selection);

        switch(selection)
        {
            case 'y':
            case 'Y':
                size++;
                printf("Added contact...\n");
                return;
            case 'n':
            case 'N':
                memset(pb[size].name, 0, 32 + 1);
                memset(pb[size].mobile, 0, 32 + 1);
                break;
            case 'b':
            case 'B':
                memset(pb[size].name, 0, 32 + 1);
                memset(pb[size].mobile, 0, 32 + 1);
                printf("No contact added...\n");
                return;
            default:
                printf("Invalid option selected... default to N\n");
                break;
        }

        printf("\n");
    }
}

void RemoveContact(PHONEBOOK *pb)
{
    char name[32 + 1];
    int i, j;

    for( ; ; )
    {
        printf("Enter name (BK - back): ");
        FLUSH;
        scanf("%32[^\n]", name);

        if((name[0] == 'b' || name[0] == 'B') && (name[1] == 'k' || name[1] == 'K') && name[2] == '\0')
            return;

        for(i = 0 ; i < size ; i++)
        {
            if(strstr(strlwr(pb[i].name), strlwr(name)) != 0)
            {
                printf("ID    : %d\n", i+1);
                printf("Name  : %s\n", pb[i].name);
                printf("Mobile: %s\n", pb[i].mobile);
                printf("\n");

                printf("Remove contact (Y - yes | N - no | B - back):");
                FLUSH;
                scanf("%c", &selection);

                switch(selection)
                {
                    case 'y':
                    case 'Y':
                        printf("Removing contact: %s\n", pb[i].name);
                        for(j = i ; j < size ; j++)
                        {
                            strcpy(pb[j].name, pb[j+1].name);
                            strcpy(pb[j].mobile, pb[j+1].mobile);
                        }
                        memset(pb[size].name, 0, 32 + 1);
                        memset(pb[size].mobile, 0, 32 + 1);
                        size--;
                        i--;
                        printf("Contact removed...\n");
                        break;
                    case 'n':
                    case 'N':
                        break;
                    case 'b':
                    case 'B':
                        return;
                    default:
                        printf("Invalid option selected... default to N\n");
                        break;
                }
            }
        }
        printf("\n");
    }
    printf("\n");
}

void SearchContact(PHONEBOOK *pb)
{
    char name[32 + 1];
    int i;

    for( ; ; )
    {
        printf("Enter name (BK - back): ");
        FLUSH;
        scanf("%32[^\n]", name);

        if((name[0] == 'b' || name[0] == 'B') && (name[1] == 'k' || name[1] == 'K') && name[2] == '\0')
            return;

        for(i = 0 ; i < size ; i++)
        {
            if(strstr(strlwr(pb[i].name), strlwr(name)) != 0)
            {
                printf("ID    : %d\n", i+1);
                printf("Name  : %s\n", pb[i].name);
                printf("Mobile: %s\n", pb[i].mobile);
                printf("\n");
            }
        }

        printf("\n");
    }
}

void DisplayContact(PHONEBOOK *pb)
{
    int i;

    for(i = 0 ; i < size ; i++)
    {
        printf("ID    : %d\n", i+1);
        printf("Name  : %s\n", pb[i].name);
        printf("Mobile: %s\n", pb[i].mobile);
        printf("\n");
    }
}
