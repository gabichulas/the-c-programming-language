#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;
  /*
  printf("Normal Getchar\n");

  while ((c = getchar()) != EOF) {
    putchar(c);
  }
  */
  int d;

  printf("Getchar = 0 o 1?\n");

  printf("var = %d\n", getchar() != EOF);

  printf("Print EOF\n");

  printf("var = %d\n", EOF);
}
