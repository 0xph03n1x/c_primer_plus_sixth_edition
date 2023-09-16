#include <stdio.h>
#define SIZE 5
#define ROWS 3

void display(int arr[][SIZE], int rows);
void double_arr(int d_arr[][SIZE], int rows);

int main(void)
{
    int array[3][SIZE] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    printf("Initial values of array:\n");
    display(array, ROWS);

    double_arr(array, ROWS);
    printf("After doubling the values in array:\n");
    display(array, ROWS);

    return 0;
}

void display(int arr[][SIZE], int rows)
{
    for (int i = 0; i < rows; i++) {
        printf("Index %d\n", i);
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void double_arr(int d_arr[][SIZE], int rows)
{
    for (int k = 0; k < rows; k++) {
        for (int l = 0; l < SIZE; l++) {
            d_arr[k][l] *= 2;
        }
    }
}
