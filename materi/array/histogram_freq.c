#include <stdio.h>

/* Kita gunakan 128 untuk mencakup karakter standar ASCII */
#define MAXCHAR 128

int main() {
  int c, i, j;
  int freq[MAXCHAR];

  for (i = 0; i < MAXCHAR; ++i)
    freq[i] = 0;

  printf("Ketik teks:\n");
  while ((c = getchar()) != EOF) {
    if (c < MAXCHAR) {
      ++freq[c];
    }
  }

  printf("\nHistogram Frekuensi Karakter:\n");
  for (i = 0; i < MAXCHAR; ++i) {
    /* Kita hanya cetak karakter yang muncul (freq > 0)
       dan karakter yang 'pr:intable' (mulai dari spasi ke atas) */
    if (freq[i] > 0 && i >= ' ') {
      if (i == ' ')
        printf("spasi | ");
      else
        printf("  %c   | ", i);

      /* Cetak bintang sebanyak jumlah kemunculannya */
      for (j = 0; j < freq[i]; ++j)
        putchar('*');

      putchar('\n');
    }
  }

  return 0;
}
