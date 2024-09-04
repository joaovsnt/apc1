#include <stdio.h>

int main(){
 float preco = 0.0f;
  double fracao = 0.0f;
  printf("Digite um preço:");
  scanf("%f", &preco);
  printf("Voce digitou: %.2f\n", preco); 

  printf("Digite uma fração: ");
  scanf("%lf", &fracao);
  printf("Você digitou: %.10lf\n", fracao);
  return 0;
}