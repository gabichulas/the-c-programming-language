#include <stdbool.h>
#include <stdio.h>

#define IN 1
#define OUT 0

int main(int argc, char *argv[]) {
  int c, state;
  state = OUT;

  while ((c = getchar()) != EOF) {
    if (state == IN) {
      putchar(c);
    }
    if (c == '\n' || c == ' ' || c == '\t') {
      state = OUT;
    } else if (state == OUT) {
      state = IN;
      putchar('\n');
      putchar(c);
    }
  }
}
