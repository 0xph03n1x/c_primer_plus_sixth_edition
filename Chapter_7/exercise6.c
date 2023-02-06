// exercise6.c
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char ch;
	bool last_is_i = false;
	int counter;

	printf("Enter input: \n");
	while((ch = getchar()) != '#')
	{
		if (ch == 'e')
		{
			last_is_i = true;
		}
		else if (last_is_i && ch == 'i')
		{
			counter++;
			last_is_i = false;
		}
		else
		{
			continue;
		}
	}
	printf("Number of occurances: %d", counter);

	return 0;
}