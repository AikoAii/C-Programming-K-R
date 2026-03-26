#include <stdio.h>
#include <stdlib.h>
#define IN 1
#define OUT 0
int main() {
  int c, state;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == 'n' || c == '\t') {
      if (state == IN) {
        putchar('\n'); // akhiri dg newline
      }
    } else {
      state = IN;
      putchar(c); // cetak char selama masih dalam satu kata
    }
  }
  return 0;
}
