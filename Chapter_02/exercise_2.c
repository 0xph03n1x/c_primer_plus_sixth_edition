// Write a program to print your name and address.
#include <stdio.h>

int main(void)
{
	char name[30] = "Firstname Lastname";
	char address[50] = "Jumpstreet";
	int house_num;

	house_num = 59;

	printf("My name is %s and my address is %d %s", name, house_num, address);

	return 0;
}