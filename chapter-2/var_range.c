#include <limits.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  char c = 1;

  printf("Valor maximo de INT: %d\n", INT_MAX);

  printf("Calculo directo: \n");

  while (c > 0) {
    c++;
  }

  printf("Valor minimo de unsigned char: %d\n", c);
  c = c - 1;
  printf("Valor maximo de unsigned char: %d\n", c);

  return 0;
}
