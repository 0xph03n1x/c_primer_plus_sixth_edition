#include <stdio.h>

int largest(int arr[], int size);

int main(void)
{
    int arr [5] = {1,3,2,4,5};

    printf("The largest_n number in the array is %d\n", largest(arr, 5));

    return 0;
}

int largest(int arr[], int size)
{
    int i = 0;
    int largest_n = 0;
    for (i = 0; i < size; i++) {
        if (largest_n < arr[i]) {
            largest_n = arr[i];
        }
    }
    return largest_n;
}
