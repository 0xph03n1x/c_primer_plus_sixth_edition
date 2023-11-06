/*
exercise2.c 

Write a program that asks you to enter an ASCII code value, such as 66, and then prints
the character having that ASCII code. 
*/
#include <stdio.h>
int main(void)
{
	int ch;

	printf("Enter ASCII code value: ");
	scanf("%d", &ch);
	printf("The equivalent character is: %c", ch);

	return 0;
}