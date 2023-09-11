#include <stdio.h>
#include <stdlib.h>
 
int main(){
    
    //int nota = -1;
    int nota;

    
/*while (nota < 0)
{
  printf("insira uma nota positiva!\n");
  scanf("%d", &nota);
}*/


// o 1 no c é true e 0 false, pois é baseado em binarios
/*while (true)
{
    printf("insira uma nota positiva!\n");
    scanf("%d", &nota);

    if(nota > 0){
        break;
    }
    
}*/

// o do while é usado quando queremos executar pelo menos 1 vez o comando, independente da condição

do
{
    printf("insira uma nota positiva\n");
    scanf("%d", &nota);
} while (nota < 0);

printf("nota %d lida:\n", nota);





}


