#include <ctype.h>
#include <stdio.h>
#define SIZE 40

char* get_word(char str[], int n);

int main(void) {
  char input[SIZE];

  get_word(input, 10);
  puts(input);

  return 0;
}

char* get_word(char* str, int n) {
  int ch;
  char* orig = str;

  for (int count = 0; count < n; count++) {
    while ((ch = getchar()) != EOF && isspace(ch)) {
      continue;
    }
    if (ch == EOF) {
      return NULL;
    } else {
      *str++ = ch;
    }
    while ((ch = getchar()) != EOF && !isspace(ch) && --n) {
      *str++ = ch;
    }
    *str = '\0';
    if (ch == EOF) {
      return NULL;
    } else {
      while (ch != '\n') {
        ch = getchar();
      }
    }
  }
  return orig;
}
