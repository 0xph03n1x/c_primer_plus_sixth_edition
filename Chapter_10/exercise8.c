#include <stdio.h>
/*
* Use a copy function from Programming Exercise 2 to copy the third through fifth elements of a seven-element array into a three-element array. 
* The function itself need not be altered; just choose the right actual arguments. (The actual arguments need not be an array name and array size.
* They only have to be the address of an array element and a number of elements to be processed.) 
*/

void copy_arr(double target[], double src[], int size);

int main(void)
{
    double source[7] = {1.,2.,3.,4.,5.,6.,7.};
    double target[3];

    copy_arr(target, &source[2], 3);

    for (int j = 0; j < 3; j++) {
        printf("%.1lf ", target[j]);
    }
    printf("\n"); 

    return 0;
}

void copy_arr(double target[], double src[], int size)
{
    for (int i = 0; i < size; i++) {
        target[i] = src[i];
    }
}
