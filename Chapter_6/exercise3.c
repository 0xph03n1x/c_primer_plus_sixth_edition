// exercise3.c
#include <stdio.h>
int main(void)
{
	int i,j;
	char ch = 'F';

	for (i = 1; i < 7; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%c", ch - j);
		}
		printf("\n");
	}

	return 0;
}