#include <stdio.h>
#include <math.h>
int main ()

{
	/*Faça um programa que receba um número positivo e maior que zero, calcule e mostre:
	 a) o número digitado ao quadrado;
	 b) o número digitado ao cubo;
	 c) a raiz quadrada do número digitado;
	 d) a raiz cúbica do número digitado.*/

	float x,quad,cub,raiz_quad,raiz_cub;

	printf("Digite um número positivo e maior que zero:");
	scanf("%f",&x);

	quad=(x*x);
	cub=(x*x*x);
	raiz_quad=sqrt(x);
	raiz_cub=cbrt(x);

	if(x<=0){
	printf("ERRO:O número tem que ser maior que zero!");

	}else{

	printf("O número digitado ao quadrado:%.1f\n",quad);
	printf("O número digitado ao cubo:%.1f\n",cub);
	printf("A raiz quadrada do número digitado:%.1f\n",raiz_quad);
	printf("A raiz cúbica do número digitado:%.1f\n",raiz_cub);
         
	}
	return 0;

}


