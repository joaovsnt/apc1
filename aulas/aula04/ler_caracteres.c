#include <stdio.h>
int main(){
 char tecla = '\0'; //caractere nulo

  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar();

  printf("Você digitou: %c\n", tecla);

  printf("Digite outra tecla: ");
  deu_certo = scanf("%c"), &tecla);
  printf("Você digitou: %c\n", tecla); 

  return 0; 
}