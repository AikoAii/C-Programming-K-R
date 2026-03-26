#include <stdio.h>

#define MAXWORD 15 /* Maksimal panjang kata yang dipantau */

int main() {
  int c, i, j, nc;
  int wl[MAXWORD];

  for (i = 0; i < MAXWORD; ++i)
    wl[i] = 0;

  nc = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (nc > 0) {
        if (nc < MAXWORD)
          ++wl[nc];
        else
          ++wl[0]; // Gunakan indeks 0 untuk kata sangat panjang
      }
      nc = 0;
    } else {
      ++nc;
    }
  }

  printf("\nHistogram Panjang Kata:\n");
  for (i = 1; i < MAXWORD; ++i) {
    printf("%2d | ", i);
    for (j = 0; j < wl[i]; ++j)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
