#include <stdio.h>

int main() {
  int c;

  // ambil satu karakter, lalu cek apakah itu akhit dari input (EOF)
  while ((c = getchar()) != EOF) {
    // jika bukan EOF, letakan karakter tersebut
    putchar(c);
  }

  return 0;
}
