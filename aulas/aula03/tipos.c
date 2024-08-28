#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
   printf("tamanho do char na memoria = %i byte(s)\n", sizeof(char));
   printf("tamanho do int na memoria = %i\n" ,sizeof(int));
   printf("tamanho do float na memoria = %i\n" ,sizeof(float));
   printf("tamanho do double na memoria = %i\n", sizeof(double));
   printf("tamanho do void na memoria = %i\n", sizeof(double));
   printf("\n"); 
   printf("a faixa de valores do char: de %i\n", CHAR_MIN, CHAR_MAX);
   printf("a faixa de valores do int: de %i a %i\n", INT_MIN, INT_MAX);
   printf("a faixa de valores do float: de %E a %E\n", FLT_MIN, FLT_MAX);
   printf("a faixa de valores do double: %E a %E\n", DBL_MIN, DBL_MAX);
   printf("\n");
  char tecla = 'A';
   printf("valor de tecla: %c\n", tecla);
  int idade = 25;
   printf("valor de idade: %i\n", idade); 
  float nota = 5.7f;
   printf("valor de nota: %f\n", nota);
  double pi = 3.14156293;
   printf("valor de pi: %.10f\n", pi);
  const float PI = 3.14f; 
   printf(" valor da constante PI = %f\n", PI);
   printf("\n");
   printf("tamanho do shor int na memoria = %lu byte(s)\n", sizeof(short int));
   printf("tamanho do long int na memoria = %lu byte(s)\n", sizeof(long int));
   printf("tamanho do long double na memoria  %lu\n", sizeof(long double));
   printf("\n");
   printf("a faixa de valores do short int: de %li a %li\n", SHRT_MIN, SHRT_MAX);
   printf("a faixa de valores do long double: %LE ate %LE\n", LDBL_MIN, LDBL_MAX);


  
  return 0;
}
