#include <stdio.h>

int main(){
     float nota1, nota2, nota3, R;

    printf("digite as notas:\n");

    printf("nota1:\n");
    scanf("%f", &nota1);

    printf("nota2:\n");
    scanf("%f", &nota2);

    printf("nota3:\n");
    scanf("%f", &nota3);
    
    R = (nota1 + nota2 + nota3)/3;

    printf("Media: %f\n", R);

    if ( R < 7)
    {
        printf("reprovado!");
    }
    
    else if(R >= 7 && R < 9){
        printf("Aprovado!");
    }

    else{
        printf("excelente!");
    }

    return 0;        
}