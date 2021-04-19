#include <stdio.h>

int main() {

  int op = 0;

  printf("=====ESCOLHA UMA OPCAO=====\n");
  printf("1. Loop com for 5 vezes\n");
  printf("2. Loop com while 5 vezes\n");
  scanf("%d", &op);
  printf("\n");

  if(op == 1) {
    int n;
    for(n = 0; n < 5; n++) {
      printf("Usando for!\n");
    }
  } else if(op == 2) {
    int n = 5;
    while(n > 0) {
      printf("Usando while!\n");
      n--;
    }
  } else {
    printf("Opção invalida!\n");
  }

  return 0;
}
