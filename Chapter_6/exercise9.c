/*
exercise9.c

Modify exercise 8 so that it uses a function to return the value of the calculation. 
*/
#include <stdio.h>
float calculation(float x, float y);

int main(void)
{
	float one, two;

	printf("Enter two floating-point numbers: ");
	while(scanf("%f%f", &one, &two) == 2)
	{
		printf("Difference of the two values divided by their product: %.2f\n", calculation(one, two));
		printf("Enter another two floating-point numbers (q to quit): ");

	}
	printf("bye\n");

	return 0;
}

float calculation(float x, float y)
{
	return (x - y) / (x * y);
}