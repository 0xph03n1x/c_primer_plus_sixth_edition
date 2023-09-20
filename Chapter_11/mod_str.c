/* mod_str.c == modifies a string */
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#define LIMIT 81

void ToUpper(char *);
int PunctCounter(const char *);

int main(void) {
  char line[LIMIT];
  char *find;

  puts("Please enter a line:");
  fgets(line, LIMIT, stdin);
  find = strchr(line, '\n');
  if (find) *find = '\0';
  ToUpper(line);
  puts(line);
  printf("That line has %d puctuation characters.\n", PunctCounter(line));

  return 0;
}

void ToUpper(char *str) {
  while (*str) {
    *str = toupper(*str);
    str++;
  }
}

int PunctCounter(const char *str) {
  int ct = 0;
  while (*str) {
    if (ispunct(*str)) {
      ct++;
    }
    str++;
  }

  return ct;
}
