// exercise1.c
#include <stdio.h>
int main(void)
{
	char ch;
	int space_cnt, new_cnt, other_cnt;
	space_cnt = new_cnt = other_cnt = 0;

	printf("Please enter text: \n");
	while((ch = getchar()) != '#')
	{
		switch(ch)
		{
		case ' ': space_cnt++;
			break;
		case '\n': new_cnt++;
			break;
		default: other_cnt++;
			break;
		}
	}
	printf("Newlines - %d, spaces - %d, all other characters: %d.\n", new_cnt, space_cnt, other_cnt);

	printf("Bye!\n");

	return 0;
}