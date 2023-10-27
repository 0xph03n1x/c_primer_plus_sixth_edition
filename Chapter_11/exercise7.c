#include <stdbool.h>
#include <stdio.h>
#include <string.h>

char* mystrncpy(char* s1, const char* s2, unsigned int n);

int main(void) {
  char s1[20] = "";
  char s2[] = "Teststring";

  for (int i = 0; i < strlen(s1); i++) {
    printf("%c", s1[i]);
  }
  printf("\n");

  mystrncpy(s1, s2, 5);

  for (int i = 0; i < strlen(s1); i++) {
    printf("%c", s1[i]);
  }

  printf("\n");

  return 0;
}

char* mystrncpy(char* s1, const char* s2, unsigned int n) {
  if (strlen(s2) >= n) {
    for (int j = 0; j < n; j++) {
      s1[j] = s2[j];
    }
  } else {
    for (int k = 0; k < strlen(s2); k++) {
      s1[k] = s2[k];
    }
    for (int l = strlen(s2); l < n; l++) {
      s1[l] = '\0';
    }
  }
  return s1;
}
