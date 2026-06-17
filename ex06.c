#include <stdio.h>
int main()
{
	/*Faça um programa que receba o salário base de um funcionário, calcule e mostre o salário a receber , sabendo-se que o funcionário
	tem gratificação de 5% sobre o salário base e paga imposto de 7% também sobre o salário base.*/
	
	double slr_base,slr_areceber,valor_gratif,valor_impost;

	printf("Digite o seu salário atual:\n");
	scanf("%lf",&slr_base);

	valor_gratif=slr_base*0.05;
	valor_impost=slr_base*0.07;
	slr_areceber=slr_base+valor_gratif-valor_impost;
          
	printf("O valor do novo salário será de:%.2f\n",slr_areceber);
	 
	return 0;
}
