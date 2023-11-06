// exercise10.c
#include <stdio.h>
int main(void)
{
	int min, max, i, sum;

	printf("Enter lower and upper integer limits: ");
	while ((scanf("%d %d", &min, &max) == 2) && (min != max))
	{
		for (i = min; i <= max; i++)
		{
			sum += i * i;
		}
		printf("The sum of the squares from %d to %d is %d\n", min * min, max * max, sum);
		sum = 0;
		printf("Enter lower and upper integer limits: ");
	}

	printf("Done!\n");

	return 0;
}