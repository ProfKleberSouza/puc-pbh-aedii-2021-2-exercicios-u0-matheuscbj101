#include <stdio.h>

int main() {
   int num;
   scanf ("%d", &num);
   if (num == 0) {
     printf ("NUMERO NEUTRO");
   }
   else {
     if (num %2 != 0) {
       if (num > 0) {
         printf ("NUMERO IMPAR POSITIVO");
       } else {
         printf ("NUMERO IMPAR NEGATIVO");
       }
     } else {
       if (num > 0) {
         printf ("NUMERO PAR POSITIVO");
       } else {
         printf ("NUMERO PAR NEGATIVO");
       }
     }
   }
   return 0;
}