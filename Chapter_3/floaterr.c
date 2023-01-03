/* floaterr.c == demonstrates round-off error */
#include <stdio.h>
int main(void)
{
	float a,b;
	b = 2.0e20 + 1.0;
	a = b - 2.0e20;
	printf("%f \n", a);

	return 0;

	/*
	The output is this:
	 0.000000 Åolder gcc on Linux
	 -13584010575872.000000 ÅTurbo C 1.5
	 4008175468544.000000 ÅXCode 4.5, Visual Studio 2012, current gcc
	
	The reason for these odd results is that the computer doesn’t keep track of enough decimal
	places to do the operation correctly. The number 2.0e20 is 2 followed by 20 zeros and, by adding 1, you are trying to change the 21st digit. To do this correctly, the program would need to
	be able to store a 21-digit number. A float number is typically just six or seven digits scaled
	to bigger or smaller numbers with an exponent. The attempt is doomed. On the other hand, if
	you used 2.0e4 instead of 2.0e20, you would get the correct answer because youare trying to
	change the fifth digit, and float numbers are precise enough for that. 
	*/
}