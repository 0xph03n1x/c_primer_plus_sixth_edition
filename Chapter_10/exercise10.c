#include <stdio.h>

void sum_arrs(int arr1[], int arr2[], int arr3[], int size);

int main(void)
{
    int array_1[4] = {2,4,5,8};
    int array_2[4] = {1,0,4,6};
    int array_3[4];

    printf("Combined array 3:\n");
    sum_arrs(array_1, array_2, array_3, 4);
    for (int j = 0; j < 4; j++) {
        printf("%d ", array_3[j]);
    }
    printf("\n");

    return 0;
}

void sum_arrs(int arr1[], int arr2[], int arr3[], int size)
{
    for (int i = 0; i < size; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
}
