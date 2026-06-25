#include <stdio.h>
int main()
{
	/*Faça um programa que receba o valor de um depósito e o valor da taxa de juros,calcule e mostre
	 o valor do rendimento e o valor total depois do rendimento.*/
    
	 double valor_dep,juros,valor_rend,valor_total;

	 printf("Digite o valor do depósito e o valor do juros respectivamente:");
	 scanf("%lf %lf",&valor_dep,&juros);

	 valor_rend=valor_dep*(juros/100);
	 valor_total=valor_dep+valor_rend;

	 printf("O valor do seu rendimento foi de:%.2f\n",valor_rend);
	 printf("O valor total do seu dinheiro pós rendimento é de:R$ %.2F",valor_total);

	 return 0;
}


        






	
