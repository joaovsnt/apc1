#include <stdio.h>
int main(){
 char tecla = 0;


  printf("Digite uma tecla: ");
  scanf("%c", &tecla);
  printf("Você digitou: %c\n", tecla);

  char nome [31];
  printf("Digite seu nome: ");
  scanf("%[^\n]s\n", nome);
  
  scanf("%s", nome);
  printf("Você digitou: %s\n", nome);
  
  
  
  return 0;
}