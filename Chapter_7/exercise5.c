// exercise5.c
#include <stdio.h>
int main(void)
{
	char ch;
	int counter = 0;

	printf("Enter input (# to quit): \n");
	while((ch = getchar()) != '#')
	{
		switch(ch)
		{
		case '.':
			counter++;
			printf("!");
			break;
		case '!':
			counter++;
			printf("!!");
			break;
		default:
			printf("%c", ch);
		}
	}
	printf("\nSubs: %d\n", counter);

	return 0;
}