#include <stdio.h>
#include <string.h>

int main(void) {
  char buff[15];
  int pass = 0;

  printf("enter password:\n");
  gets(buff);

  if (strcmp(buff, "secretpassword")) {
    printf("wrong.\n");
  } else {
    printf("correct.\n");
    pass = 1;
  }
  if (pass) {
    printf("access granted.\n");
  }
  return 0;
}
