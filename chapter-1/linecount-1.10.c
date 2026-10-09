#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') {
      putchar('\\');
      putchar('t');
    } else if (c == '\n') {
      putchar('\\');
      putchar('n');
    } else if (c == '\b') {
      putchar('\\');
      putchar('b');
    }
  }
}
