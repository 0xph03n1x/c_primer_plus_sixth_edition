#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#define LEN 80
#define MAX 10

void function1(int count, char* str[]);
void function2(int count, char* str[]);
void function3(int count, char* str[]);
void function4(int count, char* str[]);

char* s_gets(char* st, int n);

int main(void) {
  char s[MAX][LEN];
  char* strptr[MAX];
  int count = 0;

  for (int i = 0; i < MAX; i++) {
    strptr[i] = s[i];
  }
  puts("Enter up to 10 strings (press Enter to quit):");

  while (s_gets(s[count], LEN) && s[count][0] != '\0') {
    count++;
    if (count == 10) break;
  }

  while (true) {
    puts("");
    puts("1. Print the original list of strings.");
    puts("2. Print the strings in ASCII collaging sequence.");
    puts("3. Print the strings in order of length (high to low).");
    puts("4. Print the strings in order of the length of the first word.");
    puts("5. Exit.");
    printf("Enter your choice: ");
    char ch = getchar();
    while (getchar() != '\n') {
      continue;
    }
    switch (ch) {
      case '1':
        function1(count, strptr);
        break;
      case '2':
        function2(count, strptr);
        break;
      case '3':
        function3(count, strptr);
        break;
      case '4':
        function4(count, strptr);
        break;
      case '5':
        puts("Bye!");
        return 0;
      default:
        puts("Error!");
        return 0;
    }
  }

  puts("end");
  return 0;
}
void function1(int count, char* str[]) {
  for (int i = 0; i < count; i++) {
    for (int l = 0; l < strlen(str[i]); l++) {
      printf("%c", str[i][l]);
    }
    puts("");
  }
  puts("");
}

void function2(int count, char* str[]) {
  char* temp;

  for (int i = 0; i < count; i++) {
    for (int l = i + 1; l < count; l++) {
      if (strcmp(str[i], str[l]) > 0) {
        temp = str[i];
        str[i] = str[l];
        str[l] = temp;
      }
    }
  }
  for (int k = 0; k < count; k++) {
    for (int m = 0; m < strlen(str[k]); m++) {
      printf("%c", str[k][m]);
    }
    puts("");
  }
  puts("");
}

void function3(int cnt, char* s[]) {
  char* temp;

  for (int i = 0; i < cnt - 1; i++) {
    for (int j = i + 1; j < cnt; j++) {
      if (strlen(s[i]) > strlen(s[j])) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
      }
    }
  }

  for (int m = 0; m < cnt; m++) {
    for (int n = 0; n < strlen(s[m]); n++) {
      printf("%c", s[m][n]);
    }
    puts("");
  }
  puts("");
}

void function4(int count, char* str[]) {
  char* temp;
  for (int i = 0; i < count; i++) {
    for (int j = i + 1; j < count; j++) {
      int first_word_i = -1, first_word_j = -1;
      int k = 0, l = 0;
      char chi, chj;

      do {
        chi = str[i][k];
        k++;
        first_word_i++;
      } while (!isspace(chi));

      do {
        chj = str[j][l];
        l++;
        first_word_j++;
      } while (!isspace(chj));

      if (first_word_i > first_word_j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
      }
    }
  }
  for (int m = 0; m < count; m++) {
    for (int n = 0; n < strlen(str[m]); n++) {
      printf("%c", str[m][n]);
    }
    puts("");
  }
  puts("");
}

char* s_gets(char* st, int n) {
  char* ret_val;
  char* find;

  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    find = strchr(st, '\n');
    if (find)
      *find = '\0';
    else
      while (getchar() != '\n') continue;
  }
  return ret_val;
}
