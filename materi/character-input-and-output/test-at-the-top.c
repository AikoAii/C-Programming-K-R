#include <stdio.h>

int main() {
  long nc;

  nc = 0;

  printf("Ketik teks, lalu CTRL+D untuk hitung:\n");

  while (getchar() != EOF) {
    ++nc;
  }

  printf("Total karakter: %ld\n", nc);

  return 0;
}
