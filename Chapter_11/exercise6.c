#include <stdbool.h>
#include <stdio.h>
#define SIZE 40

_Bool is_within(char ch, const char* str);

int main(void) {
  char ch;
  char input[SIZE];

  while (scanf("%s %c", input, &ch) == 2) {
    while (getchar() != '\n') {
      continue;
    }
    _Bool inside = is_within(ch, input);
    if (inside == 1) {
      printf("%c found in string %s\n", ch, input);
    } else {
      printf("%c not found in string", ch);
    }
    printf("Enter another string and character.\n");
    ;
  }
  return 0;
}

_Bool is_within(char ch, const char* str) {
  while (*str != ch && *str != '\0') {
    str++;
  }
  return *str;
}
