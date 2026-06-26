#include <stdio.h>
#include <stdlib.h>

/*Pedro comprou um saco de ração com peso em quilos.Ele possui dois gatos ,para
os quais fornece quantidade de ração em gramas.A quantidade diária de ração
fornecida para cada gato é sempre a mesma.Faça um programa que receba o peso do
saco de ração e a quantidade de ração fornecida para cada gato , calcule e
mostre quanto restará de ração no saco após 5 dias.*/

int main() {
  float peso_sacracao, quant_gato1, quant_gato2, dia1, dia5, rest_racao;

  printf("Digite o peso do saco de ração comprado por Pedro em kg: \n");
  scanf("%f", &peso_sacracao);

  printf("\nDigite a quantidade de ração fornecida para cada gato em gramas "
         "respectivamente: \n");
  scanf("%f%f", &quant_gato1, &quant_gato2);

  quant_gato1 = quant_gato1 / 1000;
  quant_gato2 = quant_gato2 / 1000;
  dia1 = quant_gato1 + quant_gato2;
  dia5 = dia1 * 5;

  rest_racao = peso_sacracao - dia5;

  printf("A quantidade de ração restante no saco após 5 dias será de %.2f kg!",
         rest_racao);

  return 0;
}
