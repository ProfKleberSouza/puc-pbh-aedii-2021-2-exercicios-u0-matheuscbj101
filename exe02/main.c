#include <stdio.h>

int main() {
  int R, V, T, D, L;

  scanf ("%d", &T);
  scanf ("%d", &V);
  scanf ("%d", &R);

  D = T * V;
  L = D/R;

  printf ("\nR = %d\nV = %d\nT = %d\nD = %d\nL = %d\n", R, V, T, D, L);

}