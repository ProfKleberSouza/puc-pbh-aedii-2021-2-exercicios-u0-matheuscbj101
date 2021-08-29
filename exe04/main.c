#include <stdio.h>

int main() {
  int a, b, c;
  scanf ("%d %d %d", &a, &b, &c);
  int MENOR, MAIOR;
  MENOR = a;
  MAIOR = a;
  if (MENOR > b) {
      MENOR = b;
    }
  if (MENOR > c) {
    MENOR = c;
  }
   if (MAIOR < b) {
      MAIOR = b;
    }
  if (MAIOR < c) {
    MAIOR = c;
  }
  printf ("MENOR = %d\nMAIOR = %d", MENOR, MAIOR);
  return 0;
}