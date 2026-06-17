#include <stdio.h>

int main()
{
	/*Faça um programa que receba o salário base de um funcionário , calcule e mostre o seu salário 
	a receber,sabendo-se que o funcionário tem gratificação de R$ 50 e paga imposto de 10% sobre 
	o salário base.*/

	float slr_base,slr_receber,valor_impost;

	printf("Digite o seu salário atual:");
	scanf("%f",&slr_base);

	valor_impost=slr_base*0.10;
	slr_receber=slr_base +50-valor_impost;

	printf("Seu novo salário será de:%.2f\n",slr_receber);

	return 0;
}
