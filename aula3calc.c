#include <stdio.h>

int main(){
    float n1, n2, r;
    char op;

    printf("digite o numero1:\n");
    scanf("%f", &n1);

    printf("digite o numero 2:\n");
    scanf("%f", &n2);

    printf("digite a operacao:\n");
    scanf(" %c", &op);
    
    //adição

    if (op=='a')
    {
        r = n1 + n2;
        printf("resultado: %2.f\n", r);
    }

    //subtração

    else if (op=='s')
    {
        r = n1 - n2;
        printf("resultado: %2.f.\n", r);
    } 
    
    else if (op=='m')
    {
        r = n1 * n2;
        printf("resultado: %2.f.\n", r);
    }

    else if (op=='d')
    {
        r = n1/n2; 
        printf("resultado: %2.f\n," r);
    }

    else{
        printf("caracter nao reconhecido, digite apenas a, s, m e d");
    }

    return 0;
    
    
    

}
