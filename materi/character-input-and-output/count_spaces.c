#include <stdio.h>

int main() {
  int c, nt, nb, nl;

  nb = 0;
  nt = 0;
  nl = 0;

  printf("Masukan teks (CTRL+D untuk berhenti):\n");

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++nb;
    else if (c == '\t')
      ++nt;
    else if (c == '\n')
      ++nl;
  }

  printf("\nSpasi: %d\n", nb);
  printf("Tab: %d\n", nt);
  printf("Baris baru: %d\n", nl);

  return 0;
}
