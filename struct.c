#include <stdio.h>
#include <string.h>
    
    struct endereco
    {
        char rua[50];
        int num;
        char cidade[50];
    };
    

    struct aluno
    {
        char nome[100];
        int idade, matricula;
        float n1, n2, n3;
        struct  endereco endereco;
        

    }//ou coloca as variaveis aqui antes do ponto e virgula. ex: a1, a2, a3
    ;


int main(){

    //ja ocorre a declaração dos valores, tambem é permitido, tendo que seguir as ordens das variaveis; 
    //struct aluno a1 = { "mateus", 1111, 10, 9, 8};

    struct aluno a1;

    printf("preencha o cadastro:\n");
    printf("nome: ");
    scanf("%s", a1.nome);
    printf("matricula: ");
    scanf("%d", &a1.matricula);
    printf("notas: ");
    scanf("%f %f %f", &a1.n1, &a1.n2, &a1.n3);

    printf("nome do aluno a1: %s\n", a1.nome);
    printf("matricula do aluno a1: %d\n", a1.matricula);
    printf("notas do aluno a1: %f %f %f\n", a1.n1, a1.n2, a1.n3);

    
    
    
   return 0; 
}
