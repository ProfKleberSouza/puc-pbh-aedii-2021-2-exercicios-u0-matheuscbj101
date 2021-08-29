#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf ("%d", &n);
  int i;
  int a;
  scanf ("%d", &a); 
  int maior = a;
  int menor = a;
  for (i = 0; i < n-1; i++) {
    scanf ("%d", &a); 
    if (maior < a) {
      maior = a;
    }
    if (menor > a ) {
      menor = a;
    } 
  }
  printf ("MENOR = %d", menor);
  printf ("\nMAIOR = %d", maior);
}