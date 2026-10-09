#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int c, nl;

  nl = 0;

  while ((c = getchar()) != EOF)
    if (c == '\n')
      ++nl;
    else if (c == '\t')
      ++nl;
    else if (c == ' ')
      ++nl;

  printf("%d\n", nl);
}
