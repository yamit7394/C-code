
#include<stdio.h>
int main()
{
    double num1,num2;
    char op;
    printf("Enter two numbers= ");
    scanf("%lf%lf",&num1,&num2);
    lable:
    printf("Enter the operation you want to perform(+,-,*,/)= ");
    fflush(stdin);
    scanf("%c",&op);
    printf("\n");

    switch(op)
    {
    case '+':
        printf("%.2lf",num1+num2);
        break;
    case '-':
        printf("%.2lf",num1-num2);
        break;
    case '*':
        printf("%.2lf",num1*num2);
        break;
    case '/':
        printf("%.2lf",num1/num2);
        break;
    default:
        printf("Wrong Input\n");
        goto lable;
    }
    return 0;
}
