// exercise1.c
#include <stdio.h>
int main(void)
{
	const int SIZE = 26;
	char alph[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		alph[i] = 'a' + i;
	}
	for (i = 0; i < SIZE; i++)
	{
		printf("%c", alph[i]);
	}

	return 0;
}