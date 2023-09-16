#include <bits/posix2_lim.h>
#include <stdio.h>
#define COLS 3
#define SIZE 4

void copy_arr(double target[], double src[], int cols);

int main(void)
{
    double source[COLS][SIZE] = {
    {1.0,2.,3.,4.},
    {5.,6.,7.,8.},
    {10.,11.,12.,13.}
    };
    double target[COLS][SIZE];

    printf("First array elements:\n");
    for (int i = 0; i < COLS; i++) {
        printf("%d index: ", i);
        for (int j = 0; j < COLS; j++) {
            printf("%.1lf ", source[i][j]);       
        }
        printf("\n");
    }
    
    for (int k = 0; k < COLS; k++) {
        copy_arr(target[k], source[k], SIZE);
    }

    printf("Second array elements:\n");
    for (int i = 0; i < COLS; i++) {
        printf("%d index: ", i);
        for (int j = 0; j < COLS; j++) {
            printf("%.1lf ", target[i][j]);       
        }
        printf("\n");
    }
}

void copy_arr(double target[], double src[], int cols)
{
        for (int l = 0; l < SIZE; l++) {
            target[l] = src[l];
        }
}
