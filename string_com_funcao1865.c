#include <stdio.h>
#include <string.h>


void EhOThor(char heroi[]){

        if (strcmp(heroi, "Thor") ==0)
        {
            printf("Y\n"); 
        }else
        {
            printf("N\n");
        }
        

}



int main(){

    int numEntradas, forca;
    char heroi[100];
    scanf("%d", &numEntradas);


    for (int i = 0; i < numEntradas; i++)
    {
        scanf("%s", heroi);//nao precisa usar &
        scanf("%d", &forca);

        EhOThor(heroi);
        /*if (strcmp(heroi, "Thor") ==0)
        {
            printf("Y\n"); 
        }else
        {
            printf("N\n");
        }*/
        
        
    }
    


    return 0;
}
