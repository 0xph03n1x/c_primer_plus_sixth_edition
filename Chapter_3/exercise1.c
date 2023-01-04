/* 
exercise1.c 

Find out what your system does with integer overflow, floating-point overflow, and
floating-point underflow by using the experimental approach; that is, write programs
having these problems. (You can check the discussion in Chapter 4of limits.h and
float.h to get guidance on the largest and smallest values.) 
*/
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {

   printf("The number of bits in a byte %d\n", CHAR_BIT);

   printf("The minimum value of SIGNED CHAR = %d\n", SCHAR_MIN);
   printf("The maximum value of SIGNED CHAR = %d\n", SCHAR_MAX);
   printf("The maximum value of UNSIGNED CHAR = %d\n", UCHAR_MAX);

   printf("The minimum value of SHORT INT = %d\n", SHRT_MIN);
   printf("The maximum value of SHORT INT = %d\n", SHRT_MAX); 

   printf("The minimum value of INT = %d\n", INT_MIN);
   printf("The maximum value of INT = %d\n", INT_MAX);

   printf("The minimum value of CHAR = %d\n", CHAR_MIN);
   printf("The maximum value of CHAR = %d\n", CHAR_MAX);

   printf("The minimum value of LONG = %ld\n", LONG_MIN);
   printf("The maximum value of LONG = %ld\n", LONG_MAX);
  
   /* printf the float maximum numbers */

   printf("The maximum value of float = %.10e\n", FLT_MAX);
   printf("The minimum value of float = %.10e\n", FLT_MIN);

   /*
   This creates a compiler warning in clang that the specifier is wrong and should be %d.
   No error when compiling with GCC, same result
   */
   printf("The number of digits in the number = %.10e\n", FLT_MANT_DIG);
   // Same as last printf(), but changed the specifier to %d
   printf("The number of digits in the number = %d\n", FLT_MANT_DIG);

   /*
	Result of the previous printf():
	The number of bits in a byte 8
	The minimum value of SIGNED CHAR = -128
	The maximum value of SIGNED CHAR = 127
	The maximum value of UNSIGNED CHAR = 255
	The minimum value of SHORT INT = -32768
	The maximum value of SHORT INT = 32767
	The minimum value of INT = -2147483648
	The maximum value of INT = 2147483647
	The minimum value of CHAR = -128
	The maximum value of CHAR = 127
	The minimum value of LONG = -9223372036854775808
	The maximum value of LONG = 9223372036854775807
	The maximum value of float = 3.4028234664e+38
	The minimum value of float = 1.1754943508e-38
	The number of digits in the number = 1.1754943508e-38
	The number of digits in the number = 24
   */

   // Integer overflow example
   int int_overflow;
   int_overflow = INT_MAX + 1;

   printf("Integer overflow result: %d\n", int_overflow);

   // Floating-point overflow
   float float_overflow;
   float_overflow = FLT_MAX + 1.;

   printf("Floating-point overflow result: %f\n", float_overflow);

   // Floating-point underflow
   float float_underflow;
   float_underflow = FLT_MIN / 2.;

   printf("Floating-point underflow result: %f\n", float_underflow);

   return(0);
}
