// exercise12.c
#include <stdio.h>
int main(void)
{
	long limit;
	float sign = 1.0f;
	float s1 = 0.0, s2 = 0.0;

	printf("Enter number of terms: ");
	scanf("%ld", &limit);

	for (long int i = 1; i <= limit; i++)
	{
		s1 += 1.0f/i;
		s2 += (1.0f/i) * sign;
		sign = -sign;
	}

	printf("The %ldth partial sum for series 1 is : %.5f\n", limit, s1);
	printf("The %ldth partial sum for series 2 is : %.5f\n", limit, s2);

	return 0;
}