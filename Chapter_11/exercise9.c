#include <stdio.h>
#include <string.h>
#define SIZE 50

void reversed(char* s1);

int main(void) {
  char str[SIZE];

  puts("Enter string:");

  while ((scanf("%s", str)) == 1) {
    printf("Initial string: %s\n", str);
    reversed(str);
    printf("Reversed string: %s\n", str);
    puts("Enter string:");
  }

  return 0;
}

void reversed(char* s1) {
  char* start;
  char* end;
  char temp;

  start = s1;
  end = s1 + strlen(s1) - 1;

  for (int i = 0; i < strlen(s1) / 2; i++) {
    temp = *start;
    *start = *end;
    *end = temp;
    start++;
    end--;
  }
}
