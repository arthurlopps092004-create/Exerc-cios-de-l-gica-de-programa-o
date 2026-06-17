#include <stdio.h>
int main ()
{
	//Faça um programa que receba o salário de um funcionário,calcule e mostre o novo sslśrio,sabendo-se que este sofreu um aumento de 25%
	
	double slr_atual,slr_novo;

	printf("Digite o seu salário atual:");
	scanf("%lf",&slr_atual);

	slr_novo=slr_atual+(slr_atual*0.25);

	printf("Parabéns!Seu novo salário é de %.2f!",slr_novo);

	return 0;
}
