#include <stdio.h>
#include <stdlib.h>

/*O custo ao consumidor de um carro novo é a soma do preço da fábrica com o
 percentual de lucro do distribuidor e dos impostos aplicados ao preço da
 fábrica.Faça um programa que receba o preço de fábrica de um veículo,o
 percentual de lucro do distribuidor e o percentual de impostos,calcule e
 mostre: a)o valor correspondente ao lucro do distribuidor; b)o valor
 correspondente aos impostos; c)o preço final do veículo.*/

int main() {
  double preco_fabrica, lucro_dist, percent_imp, preco_final;

  printf("Digite o preço de fábrica do veículo:\n");
  scanf("%lf", &preco_fabrica);

  printf("\nQual o percentual de lucro do distribuidor:\n");
  scanf("%lf", &lucro_dist);

  printf("\nQual o percentual de impostos:\n");
  scanf("%lf", &percent_imp);

  preco_final = preco_fabrica + (preco_fabrica * lucro_dist / 100) +
                (preco_fabrica * percent_imp / 100);

  printf("\nO valor correspondente ao lucro do consumidor é %.1lf\n",
         lucro_dist);
  printf("\nO valor correspondente aos impostos é de %.1lf\n", percent_imp);
  printf("\nO preço final do veículo será de %.1lf\n", preco_final);

  return 0;
}
