/*
exercise1.c

Write a program that asks for your first name, your last name, and then prints the names in the format last, first.
*/
#include <stdio.h>
int main(void)
{
	char first_name[30];
	char last_name[30];

	printf("Enter your first and last names:\n");
	scanf("%s %s", first_name, last_name);
	printf("Hello %s, %s!\n", last_name, first_name);

	return 0;
}