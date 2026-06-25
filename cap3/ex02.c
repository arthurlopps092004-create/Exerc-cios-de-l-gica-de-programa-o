#include <stdio.h>
int main()
	//Faça um programa que receba três notas , calcule e mostre a média aritmética. 
{
	float num1,num2,num3,media;

	printf("Digite três números:");
	scanf("%f %f %f",&num1, &num2, &num3);

	media=(num1+num2+num3)/3;

	printf("A média desses três números é:%.1f",media);

	return 0;
}
