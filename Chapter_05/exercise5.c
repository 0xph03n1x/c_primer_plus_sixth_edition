/* exercise5.c */

#include <stdio.h>

int main(void)
{
	int count, sum, max_count;
	sum = 0;
	count = 1;

	printf("How many days? ");
	scanf("%d", &max_count);
	while (count <= max_count)
	{
		sum = sum + count;
		count++;
	}
	printf("sum = %d\n", sum);

	return 0;
}