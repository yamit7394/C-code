#include<stdio.h>
#include<string.h>
int length(char *str)
{
	int l=0;
	while(*str != '\0')
	{
        l++;
		str++;
	}
	return l;
}
int compare(char *str1,char *str2)
{
	if(length(str1)!=length(str2))
		return 0;
	while(*str1 != '\0')
	{
		if(*str1 != *str2)
		{
			str1++;
			str2++;
			return 0;
		}
		else
            str1++;
			str2++;
			return 1;
	}
}
int main()
{
	char str1[100];
	char str2[100];
	printf("Enter first string= ");
	gets(str1);
	printf("Enter second string= ");
	gets(str2);
	int l1=length(str1);
	int l2=length(str2);
	int flag=0;
	printf("%d,%d\n\n",l1,l2);
	if(flag==compare(str1,str2))
		printf("Not equal");
	else
		printf("Strings are equal");
	return 0;

}
