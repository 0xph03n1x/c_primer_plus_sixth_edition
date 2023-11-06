#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIMIT 20

int main(void) {
  int n;

  printf("How many words do you wish to enter? ");
  scanf("%d", &n);
  getchar();
  printf("Enter %d words now:\n", n);

  char **ptr = (char **)malloc(n * sizeof(char *));

  for (int i = 0; i < n; i++) {
    char *word = (char *)malloc(LIMIT * sizeof(char));
    scanf("%s", word);
    ptr[i] = word;
  }

  printf("Here are your words:\n");
  for (int j = 0; j < n; j++) {
    printf("%s\n", *(ptr + j));
  }

  free(ptr);

  return 0;
}
