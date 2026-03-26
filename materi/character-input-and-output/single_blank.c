#include <stdio.h>

int main() {
  int c, lastc;

  lastc = EOF; // Inisialisasi dengan nilai yang bukan spasi

  while ((c = getchar()) != EOF) {
    if (c != ' ') {
      putchar(c);
    } else {
      // Jika karakter sekarang spasi, cek apakah karakter sebelumnya juga spasi
      if (lastc != ' ') {
        putchar(c);
      }
    }
    lastc = c; // Simpan karakter sekarang untuk pengecekan berikutnya
  }

  return 0;
}
