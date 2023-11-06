/*
exercise6.c

Write a program that requests the user’s first name and then the user’s last name. Have it print the entered names on one line and the number of letters in each name on the following line. Align each letter count with the end of the corresponding name, as in the following:
 Melissa Honeybee
		7		8
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
	char first_name[20];
	char last_name[20];
	int first_size, last_size;

	printf("Enter your first name:\n");
	scanf("%s", first_name);
	first_size = strlen(first_name);
	printf("Enter your last name:\n");
	scanf("%s", last_name);
	last_size = strlen(last_name);
	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", first_size, first_size, last_size, last_size);
	printf("%s %s\n", first_name, last_name);
	printf("%-*d %-*d", first_size, first_size, last_size, last_size);

	return 0;
}