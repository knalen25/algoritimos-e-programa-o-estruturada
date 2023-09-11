#include <stdio.h>

int main(){
     float nota1, nota2, nota3, R;
     char turno;

    printf("digite o turno:");
    scanf("%c", &turno);

    printf("digite as notas:\n");

    printf("nota1:\n");
    scanf("%f", &nota1);

    printf("nota2:\n");
    scanf("%f", &nota2);

    printf("nota3:\n");
    scanf("%f", &nota3);

    
    
    R = (nota1 + nota2 + nota3)/3;

    

    //nota
    if ( R < 7)
    {
        printf("reprovado!\n");
    }
    
    else if(R >= 7 && R < 8){
        R = R + 1;
        printf("Aprovado!\n");

    }

    else{
        R = 10;
        printf("excelente!!!\n");
    }

    printf("Media: %f\n", R);

    //turno

    if (turno=='m')
    {
        printf("aluno do turno: matutino\n");    
    }

    else if (turno=='n')
    {
        printf("aluno do turno: noturno\n");    
    }
    
    else
    {
        printf("turno invalido\n");
    }

    
    return 0;        
}