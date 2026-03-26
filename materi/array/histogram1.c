#include <stdio.h>

#define MAXWORD 15 /* Anggap panjang kata maksimal 15 huruf */
#define IN 1
#define OUT 0

int main() {
  int c, i, j, nc, state;
  int word_lengths[MAXWORD];

  for (i = 0; i < MAXWORD; ++i)
    word_lengths[i] = 0;

  state = OUT;
  nc = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      if (state == IN) {
        if (nc < MAXWORD)
          ++word_lengths[nc];
        nc = 0;
      }
      state = OUT;
    } else {
      state = IN;
      ++nc;
    }
  }

  printf("\nHistogram Panjang Kata:\n");
  for (i = 1; i < MAXWORD; ++i) {
    printf("%2d: ", i);
    for (j = 0; j < word_lengths[i]; ++j)
      putchar('*');
    putchar('\n');
  }
  return 0;
}
