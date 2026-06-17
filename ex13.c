#include <stdio.h>
#include <math.h>
int main()

{
/*Sabe-se que pé=12 polegadas,1 jarda=3 pés e 1 milha=1,760 jarda. 
Faça um programa que receba uma medida em pés , faça as conversões a seguir e mostre os resultados.
a)polegadas
b)jardas
c)milhas
*/

double medida_pe,jardas,milhas,polegadas;

  printf("Digite o valor de uma medida em pés:");
  scanf("%lf",&medida_pe);

  polegadas=medida_pe*12;
  jardas=medida_pe/3;
  milhas=jardas/1760;

  printf("O valor da medida em polegadas é de:%.2lf\n",polegadas);
  printf("O valor da medida em jardas é de:%.2lf\n",jardas);
  printf("O valor da medida em milhas é de:%.5lf\n",milhas);

  return 0;
}
