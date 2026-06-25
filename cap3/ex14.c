#include <stdio.h>

int main()

{

/*Faça um programa que receba a data de nascimento de uma pessoa e o ano atual , calcule e mostre:
a)A idade dessa pessoa;
b)Quantos anos ela terá em 2050;
*/

int data_nasc,ano_atual,idade_atual,idade_futura;


   printf("Digite a data do seu nascimento:\n");
   scanf("%d",&data_nasc);

   printf("Digite o ano atual:\n");
   scanf("%d",&ano_atual);

   idade_atual=(ano_atual)-(data_nasc);
   idade_futura=2050-(data_nasc);

   printf("Você tem %d anos!\n",idade_atual);
   printf("E você terá %d anos em 2050!\n",idade_futura);

   return 0;

}
