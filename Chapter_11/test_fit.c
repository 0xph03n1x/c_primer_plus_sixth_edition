/* test_fit.c == try the string-shrinking function */
#include <stdio.h>
#include <string.h>

void fits(char *, unsigned int);

int main(void) {
  char mesg[] = "Things should be as simple as possible,"
                " but not simpler.";
  puts(mesg);
  fits(mesg, 38);
  puts("Let's look at some more of the sting.");
  puts(mesg + 39);
  return 0;
}

void fits(char *string, unsigned int size) {
  if (strlen(string) > size) {
    string[size] = '\0';
  }
}
