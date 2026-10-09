#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char *argv[]) {
  float fahr, celsius;
  int LOWER, upper, step;

  LOWER = 0;
  upper = 300;
  step = 20;

  fahr = LOWER;

  printf("Tabla de conversion: Fahrenheit a Celsius\n");

  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
  }
}
