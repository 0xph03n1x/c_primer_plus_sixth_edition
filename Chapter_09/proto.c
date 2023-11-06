/* proto.c -- uses a function prototype */
#include <stdio.h>
int imax(int, int);
int main(void) {
    // Origianl printf() from the book.
    // Changed the number of arguments to compile the program.
    // printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
    return 0;
}

int imax(int n, int m) {
    return (n > m ? n : m);
}
