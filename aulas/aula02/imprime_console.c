#include <stdio.h> //biblioteca entrada e saida

int main() {
  //imprime um texto
  printf("um texto sempre entre aspas duplas\n\n");
  
  //imprime um numero inteiro
  printf("%i\n", 10);
  printf("%i %i\n", 3, 4);
  printf("%5i\n", 432);
  printf("%05i\n", 3);

  //imprime um numero decimal
  printf("%f\n", 4.7435);
  printf("%.2f\n", 5.3552);
  printf("%f10.2\n", 5.3552);

  //imprime um caractere entre aspas simples
  printf("%c\n", 'm');
  printf("%c", 349);

  //imprime um string
  printf("%s\n", "qualquer coisa");
  printf("%30s\n", "hfjehjfhje");

 return 0;
}