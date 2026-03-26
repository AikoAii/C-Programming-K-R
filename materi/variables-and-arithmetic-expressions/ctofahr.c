#include <stdio.h>

int main() {
  float fahr, celcius, step, lower, upper;

  lower = 0;   // batas terendah dari skala suhu
  upper = 300; // batas tertinggi
  step = 20;   // ukuran langkah

  celcius = lower;

  printf("Tabel Konversi Suhu\n");
  printf("celcius\tFahr\n");
  printf("-----------------\n");

  while (celcius <= upper) {
    fahr = (9.0 / 5.0) * celcius + 32.0;    // rumus
    printf("%3.0f %6.1f\n", celcius, fahr); // print output
    celcius += step;                        // agar tidak infinity loop
  }

  return 0;
}
