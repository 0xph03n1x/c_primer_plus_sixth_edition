#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define TIMES 1000

int main(void) {
  int i, j, k;
  int arr[SIZE] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

  for (j = 0; j < 10; j++) {
    printf("Round %d\n", j);
    srand((unsigned int)time(NULL));
    for (i = 0; i < TIMES; i++) {
      arr[rand() % 10]++;
    }
    puts("The times each number was produced:");
    for (k = 0; k < 10; k++) {
      printf("%d: %d times\n", k + 1, arr[k]);
    }
    puts("\n");
  }
  return 0;
}
