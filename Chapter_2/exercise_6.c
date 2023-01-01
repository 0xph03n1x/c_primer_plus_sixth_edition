/*
Write a program that creates an integer variable called toes. Have the program set toes to 10. Also have the program calculate what twice toes is and what toes squared is. The program should print all three values, identifying them.
*/
#include <stdio.h>

int main(void)
{
	int toes, twice_toes, squared_toes;
	toes = 10;
	twice_toes = 2 * toes;
	squared_toes = toes * toes;

	printf("Toes: %d\nTwice toes: %d\nSquared toes: %d\n", toes, twice_toes, squared_toes);

	return 0;
}