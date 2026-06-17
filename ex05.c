#include <stdio.h>
int main ()
{
	//Faça um programa que receba o salário de um funcionário e o percentual de aumento , calcule e mostre o valor do aumento e o novo salário.
	 
       float slr_atual,slr_novo,per_aument;

       printf("Digite o seu salário atual e seu percentual de aumento respectivamente:\n");
       scanf("%f %f",&slr_atual,&per_aument);

       slr_novo=slr_atual+(slr_atual*(per_aument/100));

       printf("Parabéns!Seu novo salário será de %.2f!",slr_novo);

       return 0;
}
