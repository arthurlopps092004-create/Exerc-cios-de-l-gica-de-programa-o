#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que receba o numero de horas trabalhadas e o valor do salario mínimo,calcule e 
  e mostre o salário a receber , seguindo essas regras:
  a)a hora trabalhada vale a metade do salário mínimo.
  b)o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada
  c)o imposto equivale a 3% do salário bruto 
  d)o salário a receber equivale ao salário bruto menos o imposto*/

int main()
{
int hrs_trab,vlr_slrmin,slr_areceber;

  printf("Digite o numero de horas trabalhadas:\n");
  scanf("%d"&hrs_trab);

  printf("\nDigite o valor do salario mínimo:\n",vlr_slrmin);
  scanf("%d",&vlr_slrmin);

  hrs_trab=hrs_trab*(vlr_slrmin/2);



}
