#include <stdio.h>
#include <string.h>
#define LEN 60

int whitespace_rm(char* str);
char* s_gets(char* str, int n);

int main(void) {
  char input[LEN];
  puts("Enter a string of 60 characters or less:");
  while (s_gets(input, LEN) && input[0] != '\0') {
    whitespace_rm(input);
    puts(input);
    puts("Enter next string (press Enter to quit).");
  }
  puts("Bye!");

  return 0;
}

int whitespace_rm(char* str) {
  char* pos;
  while (*str != '\0') {
    if (*str == ' ') {
      pos = str;
      do {
        *pos = *(pos + 1);
        pos++;
      } while (*pos);
    } else {
      str++;
    }
  }
  return 1;
}

char* s_gets(char* str, int n) {
  char* ret_val;
  char* find;

  ret_val = fgets(str, n, stdin);
  if (ret_val) {
    find = strchr(str, '\n');
    if (find) {
      *find = '\0';
    } else {
      while (getchar() != '\n') {
        continue;
      }
    }
  }

  return ret_val;
}
