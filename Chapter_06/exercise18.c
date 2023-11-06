// exercise18.c
#include <stdio.h>
int main(void)
{
	const int FOLLOWERS_INITIAL = 5;
	const int DUNBAR_COUNT = 150;
	int rabnud_count = FOLLOWERS_INITIAL;
	int i = 1;

	while (rabnud_count <= DUNBAR_COUNT)
	{
		rabnud_count -= i;
		rabnud_count *= 2;
		i++;
	}
	printf("It took %d weeks for Rabnud to reach %d", i, rabnud_count);

	return 0;
}