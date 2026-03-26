#include <stdio.h>

/* print Fahrenhit-Celcius table
 * for fahr = 0, 20, ..., 300
 */

int main() {
  float fahr, celcius, lower, upper, step;

  lower = 0;   // lower limit of temperature scale
  upper = 300; // upper limit
  step = 20;   // step size

  printf("Tabel Konversi Suhu\n");
  printf("Fahr\tCelcius\n");
  printf("---------------\n");

  fahr = lower;
  while (fahr <= upper) {
    celcius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f\t%6.1f\n", fahr, celcius);
    fahr = fahr + step;
  }

  return 0;
}
