#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  int c, i, j, max;
  int ndigit[10];

  max = 0;

  for (i = 0; i <= 10; i++) {
    ndigit[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c >= '0' && c <= '9') {
      ++ndigit[c - '0'];
      if (ndigit[c - '0'] > max) {
        max = ndigit[c - '0'];
      }
    }
  }

  printf("histogram:\n\n");
  for (i = max; i > 0; i--) {
    for (j = 0; j < 10; j++) {
      if (ndigit[j] > 0 && ndigit[j] >= i) {
        printf("# ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
  for (i = 0; i < 10; i++) {
    printf("%d ", i);
  }
  printf("\n");
}
