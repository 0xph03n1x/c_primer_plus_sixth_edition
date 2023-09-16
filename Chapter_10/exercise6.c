#include <math.h>
#include <stdio.h>
#define SIZE 5

void reverse(double arr[], int size);

int main(void)
{
    double arr[SIZE] = {1.,2.,3.,4.,5.};

    printf("Initial array elements:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.1lf ", *(arr + i));
    }

    reverse(arr, SIZE);

    printf("\nAfter reversing the array:\n");

    for (int i = 0; i < SIZE; i++) {
        printf("%.1lf ", *(arr + i));
    }
    printf("\n");

    return 0;
}

void reverse(double arr[], int size)
{
    double temp;

    for (int i = 0; i < size / 2; i++) {
        temp = *(arr + i);
        *(arr + i) = *(arr + size - i - 1);
        *(arr + size - i - 1) = temp;
    }
}
