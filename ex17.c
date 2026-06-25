#include <stdio.h>
#include <stdlib.h>

/*Um trabalhador recebeu seu salário e o depositou em sua conta bancária.Esse
 trabalhador emitiu dois cheques e agora deseja saber seu saldo atual.Sabe-se
 que cada operação bancária de retirada paga CPMF de 0,38% e o saldo inicial da
 conta esta zerado.*/

int main() {
  float val_deposito, cheque1, cheque2, cpmf1, cpmf2, saldo_final;

  printf("Digite o valor do depósito: \n");
  scanf("%f", &val_deposito);

  printf("\nDigite o valor do cheque 1 e 2 respectivamente :\n");
  scanf("%f%f", &cheque1, &cheque2);

  cpmf1 = cheque1 * 0.0038;
  cpmf2 = cheque2 * 0.0038;

  saldo_final = val_deposito - cheque1 - cheque2 - cpmf1 - cpmf2;
  printf("\nO valor final do seu saldo é de %.2f!\n", saldo_final);

  return 0;
}
