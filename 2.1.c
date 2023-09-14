#include <stdio.h>

int main(){

    int n, r, pi, resto;

    printf("digite um numero: \n");
    scanf("%d", &n);

    for (int i = 10; i <= 1000000000; i*=10)
    {
        resto = n%i;

        r = resto/(i/10);
    }
    
}