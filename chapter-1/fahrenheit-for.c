#include <stdbool.h>
#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main(int argc, char *argv[]) {
  float fahr, celsius;

  fahr = LOWER;

  printf("Tabla de conversion: Fahrenheit a Celsius\n");

  for (fahr = 300; fahr >= LOWER; fahr = fahr - STEP) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
  }
}
