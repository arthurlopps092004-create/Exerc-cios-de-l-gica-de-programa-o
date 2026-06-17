#include <stdio.h>
int main() {
  /*Faça um programa que calcule a área de um círculo.Sabendo-se que:Área=pi*r*/

  double pi, raio, area;

  printf("Digite o valor do raio de um círculo qualquer  a seguir:");
  scanf("%lf", &raio);

  pi = 3.1415;
  area = pi * (raio * raio);

  printf("Área desse círculo é de:%.2fcm²\n", area);

  return 0;
}
