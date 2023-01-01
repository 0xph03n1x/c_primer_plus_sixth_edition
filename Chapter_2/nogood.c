/* nogood.c == program with error */
/*
1 - no termination on the comment block
2 - uses parenthesis instead of braces for the main() body
3 - incorrect variable declaration
4 - no semicolon terminating the printf() statement
*/

/*
Original code block for reference:

 #include <stdio.h>
 int main(void)
 (
 int n, int n2, int n3;
 /* this program has several errors
 n = 5;
 n2 = n * n;
 n3 = n2 * n2;
 printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3)
 return 0;
 )
 
*/

#include <stdio.h>
 int main(void)
 {
 int n, n2, n3;
 /* this program has several errors*/
 n = 5;
 n2 = n * n;
 n3 = n2 * n2;
 printf("n = %d, n squared = %d, n cubed = %d\n", n, n2, n3);
 return 0;
 }