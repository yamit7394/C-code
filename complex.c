#include<stdio.h>
struct complex
{
	float real1,real2,imag1,imag2,s1,s2,d1,d2;
}cmp;
int main()
{
	printf("Enter the real part of both complex number= ");
	scanf("%f%f",&cmp.real1,&cmp.real2);

	printf("Enter the imaginary part of both complex number= ");
	scanf("%f%f",&cmp.imag1,&cmp.imag2);

	cmp.s1=cmp.real1+cmp.real2;
	cmp.s2=cmp.imag1+cmp.imag2;
	printf("\n\n%.1f+%.1fi",cmp.s1,cmp.s2);
    cmp.d1=cmp.real1-cmp.real2;
	cmp.d2=cmp.imag1-cmp.imag2;
	printf("\n\n%.1f+%.1fi",cmp.d1,cmp.d2);
	return 0;
}

