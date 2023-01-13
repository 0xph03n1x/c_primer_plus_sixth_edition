/*
exercise5.c

Have a program request the user to enter an uppercase letter. Use nested loops to produce a pyramid pattern like this:

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA 

The pattern should extend to the character entered. For example, the preceding pattern would result from an input value of E. Hint: Use an outer loop to handle the rows. Use three inner loops in a row, one to handle the spaces, one for printing letters in ascending order, and one for printing letters in descending order.
*/

#include <stdio.h>

int main(void) {
    char ch;
    char row;
    char spaces;
    char letter;

    printf("Please, insert an uppercase letter: ");
    scanf("%c", &ch);

    for (row = 'A'; row <= ch; row++) {
        for (spaces = ch; spaces > row; spaces--) {
            printf(" ");
        }
        for (letter = 'A'; letter < row; letter++) {
            printf("%c", letter);    
        }
        for (; letter >= 'A'; letter--) {
            printf("%c", letter);
        }
        printf("\n");
    }
    return 0;
}
