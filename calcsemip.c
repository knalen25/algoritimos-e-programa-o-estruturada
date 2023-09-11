#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, r;
    char op;

do
{
    printf("digite a operacao:\n");
    scanf(" %c", &op);  
    while(op!='b'&& op!='+' && op!='-' && op!='*' && op!='/')
    {
        printf("caracter nao reconhecido, digite apenas +, -, *, / ou b:\n");
        scanf(" %c", &op);
    }
    
    if (op=='b')
    {
        break;
    }
    
   


    printf("digite o numero1:\n");
    scanf("%f", &n1);

    printf("digite o numero 2:\n");
    scanf("%f", &n2);  
    
    
    //adição

   if (op=='+')
    {
        r = n1 + n2;
        printf("resultado: %f\n", r);
    }

    //subtração

    else if (op=='-')
    {
        r = n1 - n2;
        printf("resultado:%f\n", r);
    } 
    
    else if (op=='*')
    {
        r = n1 * n2;
        printf("resultado:%f\n", r);
    }

    else if (op=='/')
    {
        r = n1/n2; 
        printf("resultado:%f\n", r);
    }


} while (op !='b');

   
return 0;
   

}
