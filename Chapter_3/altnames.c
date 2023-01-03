/* altnames.c == portable names for integer types */
#include <stdio.h>
#include <inttypes.h>	//supports portable types
int main(void)
{
	int32_t me32;		//me32 a 32-bit signed variable
	me32 = 45933945;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me32 = %" PRId32 "\n", me32);

	/*
	In the final printf() argument, the PRId32 is replaced by its inttypes.h definition of "d" ,
	making the line this:
	 printf("me16 = %" "d" "\n", me16);
	But C combines consecutive quoted strings into a single quoted string, making the line this:
	 printf("me16 = %d\n", me16); 
	*/

	return 0;
}