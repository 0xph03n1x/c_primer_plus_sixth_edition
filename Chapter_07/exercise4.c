// exercise4.c
#include <stdio.h>
int main(void)
{
	char ch;
	int subs = 0;

	printf("Enter input (# to quit): \n");
	while((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			printf("!");
			subs++;
		}
		else if (ch == '!')
		{
			printf("!!");
			subs++;
		}
		else
		{
			printf("%c", ch);
		}
	}
	printf("\n");
	printf("Number of substitutions: %d", subs);

	return 0;
}