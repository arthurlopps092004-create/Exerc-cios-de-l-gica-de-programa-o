#include <stdio.h>
#include <math.h>
int main()

{

// Faça um programa que receba dois números maiores que zero, calcule e mostre um elevado ao outro.

double x,y,umelevado_ao_outro,outroelevado_ao_um;

  printf("Digite dois números maiores que zero:\n");
  scanf("%lf%lf",&x,&y);

  umelevado_ao_outro=pow(x,y);
  outroelevado_ao_um=pow(y,x);

if(x<=0 || y<=0){
  printf("Não será possível realizar a operação!");

}else{

  printf("O valor  do primeiro elevado ao segundo é:%.2lf\n",umelevado_ao_outro);
  printf("O valor do segundo elevado ao primeiro é:%.2lf\n",outroelevado_ao_um);

}

return 0;

}
