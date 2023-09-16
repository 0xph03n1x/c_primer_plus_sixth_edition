#include <stdio.h>

void display(int rows, int cols, double ar[rows][cols]);
void copy(int rows, int cols, double tar[rows][cols], double src[rows][cols]);

int main(void)
{
    double source[3][5] = {
    {1.,2.,3.,4.,5.},
    {6.,7.,8.,9.,10.},
    {11.,12.,13.,14.,15.},
    };
    double target[3][5];

    printf("Source array:\n");
    
    printf("\n"); 

    display(3, 5, source);
    
    printf("\n"); 

    printf("Target array after copy:\n");
    printf("\n"); 
    copy(3, 5, target, source);

    display(3, 5, target);
    return 0;
}

void display(int rows, int cols, double ar[rows][cols])
{
    for (int i = 0; i < rows; i++) {
        printf("Index number %d:\n", i);
        for (int j = 0; j < cols; j++) {
            printf("%.1lf ", ar[i][j]);
        }
        printf("\n");
    }
}

void copy(int rows, int cols, double tar[rows][cols], double src[rows][cols])
{
    for (int k = 0; k < rows; k++) {
        for (int l = 0; l < cols; l++) {
            tar[k][l] = src[k][l];
        }
    }
}

