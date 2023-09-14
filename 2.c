#include <stdio.h>

int main()
{
  int N, /* inteiro positivo dado (a ser lido) */ 
      soma, /* soma dos dígitos de N */
      digito; /* para armazenar cada digito de N */
       
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &N);
  printf("\n Numero dado = %d", N);

  soma = 0; /* Inicializacao da soma */
 
  while (N > 0){
    digito =  N % 10; /* o digito mais à direita de N é obtido */
    soma = soma + digito;
    N = N / 10;  /* N passa a ser o N anterior sem o dígito mais à direita */
  }
  
  printf("\n Soma dos digitos do numero dado = %d\n", soma);
  return 0;
}
