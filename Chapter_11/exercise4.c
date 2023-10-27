#include <ctype.h>
#include <stdio.h>
#define SIZE 40

char* get_word(char str[]);

int main(void) {
  char input[SIZE];

  get_word(input);
  puts(input);

  return 0;
}

char* get_word(char* str) {
  int ch;
  char* orig = str;

  while ((ch = getchar()) != EOF && isspace(ch)) {
    continue;
  }
  if (ch == EOF) {
    return NULL;
  } else {
    *str++ = ch;
  }
  while ((ch = getchar()) != EOF && !isspace(ch)) {
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
  return orig;
}
