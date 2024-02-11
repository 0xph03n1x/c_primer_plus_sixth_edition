#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SLEN 81

struct namect {
  char *fname;
  char *lname;
  int letter;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
void cleanup(struct namect *);
char *s_gets(char *st, int n);

int main(void) {
  struct namect person;

  getinfo(&person);
  makeinfo(&person);
  showinfo(&person);
  cleanup(&person);

  return 0;
}

void getinfo(struct namect *pst) {
  char temp[SLEN];
  printf("Please enter your first name.\n");
  s_gets(temp, SLEN);
  pst->fname = (char *)malloc(strlen(temp));
  strcpy(pst->fname, temp);
  printf("Please enter your last name.\n");
  s_gets(temp, SLEN);
  pst->lname = (char *)malloc(strlen(temp));
  strcpy(pst->lname, temp);
}

void makeinfo(struct namect *pst) {
  pst->letter = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo(const struct namect *pst) {
  printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname,
         pst->letter);
}

void cleanup(struct namect *pst) {
  free(pst->fname);
  free(pst->lname);
}

char *s_gets(char *st, int n) {
  char *ret_val;
  char *find;
  ret_val = fgets(st, n, stdin);
  if (ret_val) {
    find = strchr(st, '\n');  // look for newline
    if (find)                 // if the address is not NULL,
      *find = '\0';           // place a null character there
    else
      while (getchar() != '\n') continue;  // dispose of rest of line
  }
  return ret_val;
}
