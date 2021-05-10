#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d;
    float x1,x2,real,imag;
    printf("Enter the values of a,b,c of a quadratic equation = ");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-(4*a*c);
    if(d>0)
    {
        x1=((-b)+sqrt(d))/2*a;
        x2=((-b)-sqrt(d))/2*a;
        printf("Roots of quadratic equation is = %.2f,%.2f",x1,x2);
    }
    else if(d==0)
    {
        x1=-b/(2*a);
        x2=x1;
        printf("Roots of quadratic equation is = %.2f,%.2f",x1,x2);

    }
    else
    {
        printf("\nImaginary Root\n");
        real=(-b)/(2*a);
        imag=(sqrt(-d))/(2*a);
        printf("First root= %.2f + %.2fi",real,imag);
        printf("\nSecond root= %.2f - %.2fi",real,imag);

    }
    return 0;
}
