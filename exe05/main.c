#include <stdio.h>

int main() {
  int n1, n2, n3, n4;
  float avg;
  scanf ("%d %d %d %d", &n1, &n2, &n3, &n4);
  avg = (n1 + n2 + n3 + n4)/4.0;
  if (avg >= 6.0) {
    printf ("NOTA = %.1f (APROVADO)", avg);
  }
  else {
    printf ("NOTA = %.1f (REPROVADO)", avg);
  }
  return 0;
}