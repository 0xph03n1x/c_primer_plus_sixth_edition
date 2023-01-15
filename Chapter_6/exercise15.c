// exercise15.c
#include <stdio.h>
int main(void)
{
	char char_array[255];
	int i = 0;
	printf("Enter a line to reverse: ");
	while(scanf("%c", &char_array[i]), char_array[i] != '\n')
	{
		i++;
	}

	for (; 0 <= i; i--)
	{
		printf("%c", char_array[i]);
	}
	printf("\n");

	return 0;
}