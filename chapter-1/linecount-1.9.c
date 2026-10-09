#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int c, prevchar;

  prevchar = 0;

  while ((c = getchar()) != EOF) {
    if (prevchar != ' ' || c != ' ') {
      putchar(c);
    }

    prevchar = c;
  }
}
