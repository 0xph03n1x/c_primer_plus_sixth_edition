// exercise2.c
#include <stdio.h>
int main(void)
{
	const int ROWS = 6;
	int i, j;
	char ch = '$';

	for (i = 1; i < ROWS; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	return 0;
}