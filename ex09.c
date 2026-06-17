#include <stdio.h>

int main()
{
	/*Faça um programa que calcule e mostre a área de um triângulo.Sabe-se que:Área=(base*altura)/2*/

	float base,altura,area;

	printf("Digite a base e a altura do triângulo respectivamente:\n");
	scanf("%f %f",&base,&altura);

	area=(base*altura)/2;

	printf("A área desse triâgulo é de :%.2f\n",area);

	return 0;
}

	

