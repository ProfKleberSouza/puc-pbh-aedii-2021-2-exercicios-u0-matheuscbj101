#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int n;
  scanf ("%d", &n);
  typedef struct {
    char nome [50];
    float nota;
 } Alunos;
 Alunos Aluno [100];
 int avg;
 for (int i = 0; i<n; i++) {
   fflush(stdin);
   fgets (Aluno[i].nome, 100, stdin);
   scanf ("%f", &Aluno[i].nota);
   avg = avg + Aluno[i].nota;
 }
 printf ("NOTA MEDIA = %d", avg);
}