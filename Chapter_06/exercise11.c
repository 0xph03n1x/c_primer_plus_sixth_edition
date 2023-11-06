//exercise11.c
#include <stdio.h>
int main(void)
{
	const int NUM_OF_ELEMS = 8;
	int numbers[NUM_OF_ELEMS];
	int i;

	printf("Enter eight integers: ");
	/* scuffed method
	scanf("%d%d%d%d%d%d%d%d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4], &numbers[5], &numbers[6], &numbers[7]);
	*/
	for (i = 0; i < NUM_OF_ELEMS; i++)
		scanf("%d", &numbers[i]);
	for (i = NUM_OF_ELEMS - 1; i >= 0; i--)
		printf("%d", numbers[i]);

	return 0;
}