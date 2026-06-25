#include <stdio.h>
int main()
{
	// Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média poderada.
	
	float nota1,nota2,nota3,peso1,peso2,peso3,media_ponderada;
	  
	printf("Digite o valor da primeira nota e seu respctivo peso:\n");
	scanf("%f %f",&nota1, &peso1);

        printf("Digite o valor da segunda nota e seu respctivo peso:\n");
	scanf("%f %f",&nota2, &peso2);

	printf("Digite o valor da terceira nota e seu respctivo peso:\n");
	scanf("%f %f",&nota3, &peso3);

	media_ponderada=(nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);

	printf("\nA sua média final foi:%.1f",media_ponderada);

	return 0;
}
