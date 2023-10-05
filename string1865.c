#include <stdio.h>
#include <string.h>

int main(){

    int numEntradas, força;
    char heroi[100];
    scanf("%d", &numEntradas);

    for (int i = 0; i < numEntradas; i++)
    {
        scanf("%s", heroi);//nao precisa usar &
        scanf("%d", &força);

        if (strcmp(heroi, "Thor") ==0)
        {
            printf("Y\n"); 
        }else
        {
            printf("N\n");
        }
        
        
    }
    


    return 0;
}
