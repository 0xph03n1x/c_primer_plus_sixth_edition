#include <stdio.h>
#include <string.h>

char* string_in(const char* str1, const char* str2);

int main(void) {
  char string1[20] = "testingstring";
  char string2[] = "str";
  char* find;

  string_in(string1, string2);

  find = string_in(string1, string2);
  if (find) {
    puts(find);
  } else {
    puts("Not found");
  }

  return 0;
}

char* string_in(const char* str1, const char* str2) {
  int len = strlen(str2);
  int match = 1;
  int tries = strlen(str1) + 1 - len;

  if (tries > 0) {
    while ((match = strncmp(str1, str2, len)) && tries--) {
      str1++;
    }
  }
  if (match) {
    return NULL;
  } else {
    return (char*)str1;
  }
}
