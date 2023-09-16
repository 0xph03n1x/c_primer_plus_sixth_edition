#include <inttypes.h>
#include <stdio.h>
#define SIZE 5

double diff(double arr[], int size);

int main(void)
{
    double arr[SIZE] = {1.0,2.0,3.0,4.0,5.0};

    printf("The difference between the highest and lowest number is %.1lf.\n", diff(arr, SIZE));

    return 0;
}

double diff(double arr[], int size)
{
    double lowest = *arr;
    double highest = *arr;
    double diff = 0.0;

    for (int i = 0; i < size; i++) {
        if (highest < *(arr + i)) {
            highest = *(arr + i);    
        }else if (lowest > *(arr + i)) {
            lowest = *(arr + i);
        }
    }
    diff = highest - lowest;

    return diff;
}
