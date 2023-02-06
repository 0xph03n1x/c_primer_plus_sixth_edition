// exercise2.c
#include <stdio.h>
int main(void)
{
	char ch;
	int counter = 0;

	printf("Enter characters: \n");
	while ((ch = getchar()) != '#')
	{
		if (counter <= 8)
		{
			printf("%c %d ", ch, ch);
			counter++;
		}
		else
		{
			printf("\n");
			counter = 0;
		}
	}
	printf("\n");
	printf("Bye!");

	return 0;
}