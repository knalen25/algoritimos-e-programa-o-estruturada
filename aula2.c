#include <stdio.h>

int main() {
    unsigned int x, div, r;

    printf("digite o valor de x:\n");
    scanf("%d", &x);
    if(x%5==0){
        printf("%d e divisivel por 5\n", x);
    }else{
        printf("%d nao e divisivel por 5\n", x);
    }

    if (x%2==0)
    {
        printf("%d divisivel por 2\n", x);
    }else{
        printf("%d nao e divisivel por 2\n", x);
    }

    if (x%2==0 && x%5==0)
    {
        printf("%d divisivel por 2 e por 5\n", x);
    }else{
        printf("%d nao é divisivel por 2 e 5\n", x);
    }

    if(x%2!=0 && x%5!=0)
    {
        do
        {        
        printf("digite o divisor desejado\n");
        scanf("%d", &div);
        } 
        while (x%div!=0);
        
        printf("%d e divisivel por %d\n", x, div );

        r = x/div; 

        printf("resultado:%d", r);


        
    }
    

    return 0;
    


}