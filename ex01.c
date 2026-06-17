#include <stdio.h>
int main()

// Faça um programa que receba quatro números inteiros,calcule e mostre a soma
// desses números.

{
  int num1, num2, num3, num4, soma;
  printf("Digite quatro nùmeros:\n");
  scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

  soma = num1 + num2 + num3 + num4;
  printf("A soma desses números é:%d", soma);
  return 0;
}
