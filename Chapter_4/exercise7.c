/*
exercise7.c

Write a program that sets a type double variable to 1.0/3.0 and a type float variable to 1.0/3.0. Display each result three times—once showing four digits to the right of the decimal, once showing 12 digits to the right of the decimal, and once showing 16 digits to the right of the decimal. Also have the program include float.h and display the values of FLT_DIG and DBL_DIG. Are the displayed values of 1.0/3.0 consistent with these values?
*/
#include <stdio.h>
#include <float.h>
int main(void)
{
	double var1 = 1.0/3.0;
	float var2 = 1.0/3.0;

	printf("var1 = %.4f var2 = %.4f\n", var1, var2);
	printf("var1 = %.12f var2 = %.12f\n", var1, var2);
	printf("var1 = %.16f var2 = %.16f\n", var1, var2);

	printf("%d\n", FLT_DIG);
	printf("%d\n", DBL_DIG);

	return 0;

}