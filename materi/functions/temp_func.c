#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20

float fahr_to_celcius(float fahr);

int main() {
  float fahr;

  printf("Fahrenhit to Celcius\n");
  printf("-------------------------\n");

  fahr = LOWER;
  while (fahr <= UPPER) {
    printf("%3.0f %6.1f\n", fahr, fahr_to_celcius(fahr));
    fahr += STEP;
  }

  return 0;
}

float fahr_to_celcius(float f) { return (5.0 / 9.0) * (f - 32.0); }
