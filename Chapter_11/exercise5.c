#include <stdio.h>
#include <string.h>
#define SIZE 40

char* chr_occurence(char* str, int c);

int main(void) {
  char input[SIZE];
  char ch;
  int occurence = 0;

  puts("Enter a string and a character to find:");

  while (scanf("%s %c", input, &ch) == 2) {
    while (getchar() != '\n') {
      continue;
    }
    char* find = chr_occurence(input, ch);
    if (find) {
      printf("The character %c was found in the string.\n", ch);
    } else {
      printf("The character %c was not found", ch);
    }
    printf("Enter another string and character to find.\n");
  }
  puts("Bye!");

  return 0;
}

char* chr_occurence(char* str, int c) {
  for (int i = 0; i < strlen(str); i++) {
    if (str[i] == c) {
      return &str[i];
    }
  }
  return NULL;
}
