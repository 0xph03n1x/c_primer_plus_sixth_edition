#include <ctype.h>
#include <stdio.h>
#define SIZE 40

char* get_nchar(char str[], int n);

int main(void) {
  char input[SIZE];

  get_nchar(input, 10);
  puts(input);

  return 0;
}

char* get_nchar(char* str, int n) {
  int count = 0;
  int ch;
  for (; count < n; count++) {
    ch = getchar();
    if (ch != EOF && !isspace(ch) && ch != '\t' && ch != '\n') {
      str[count] = ch;
    } else {
      break;
    }
  }
  str[count] = '\0';
  return str;
}
