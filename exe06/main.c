#include <stdio.h>

int main() {
  int x, y, z;

  scanf("%d %d %d", &x, &y, &z);

  if (x > y+z || y > x+z || z > x+y) {
    printf ("OS LADOS NAO FORMAM UM TRIANGULO");
  }
  else {
    if (x == y && y == z) {
      printf ("TRIANGULO EQUILATERO");
    } 
    else if (x == y || x == z || z == y ) {
      printf ("TRIANGULO ISOSCELES");
    } 
    else if (x != y && x != z && y != z ) {
      printf ("TRIANGULO ESCALENO");
    }
  }
}