/* family.c */
#include <stdio.h>

int main(void)
{
	char name[40];
	float cash;

	printf("Enter family name: \n");
	scanf("%s", name);
	printf("Enter amount of cash: \n");
	scanf("%f", &cash);

	printf("The %s family just may be %c%.2f richer!\n", name, '$', cash);

	return 0;
}