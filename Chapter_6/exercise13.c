// exercise13.c
#include <stdio.h>
int main(void)
{
	const int ARR_SIZE = 8;
	int array[ARR_SIZE];
	int i;

	printf("Enter eight integer numbers: ");
	for (i = 0; i < ARR_SIZE; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i = 0; i < ARR_SIZE; i++)
	{
		array[i] *= array[i];
	}

	int j = 0;

	do
	{
		printf("%d ", array[j]);
		j++;
	}
	while(j < ARR_SIZE);

	printf("\nEnd\n");

	return 0;
}