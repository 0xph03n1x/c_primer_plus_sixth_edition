#include <stdio.h>
#define SIZE 5

int largest_index(double arr[], int size);

int main(void)
{
    double arr[SIZE] = {1.0,2.0,5.0,4.0,3.0};

    printf("The index of the largest number is %d\n", largest_index(arr, SIZE));
}

int largest_index(double arr[], int size)
{
    int index = 0;
    int largest = *arr;
    
    for (int i = 0; i < size; i++) {
        if (largest < arr[i]) {
            largest = *(arr + i);
            index = i;
        }
    }

    return index;
}
