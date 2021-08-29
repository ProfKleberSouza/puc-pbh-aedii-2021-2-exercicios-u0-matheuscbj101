#include <stdio.h>

int main() {
  int n = 1;
  while (n != 0) {
    scanf ("%d", &n);
    if (n == 0) {
      return 0;
    }
    if (n > 0) {
      printf ("POSITIVO\n");
    }
    if (n < 0) {
      printf ("NEGATIVO\n");
    }
  }
}