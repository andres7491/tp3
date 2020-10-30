#include <stdio.h>
#define TAMA 20

int main()
{
    int arre[TAMA];
    int sumaPar = 0, sumaImpar=0;

    printf("Ingrese 20 numeros entereos:");
    for (int i = 0; i < TAMA; i++)
    {
        printf("\n arre[%d]:", i);
        scanf("%d", &arre[i]);
    }
    printf("El arreglo ingresado es: ");

    for (int i = 0; i < TAMA; i++)
    {
        printf("\n %d", i, arre[i]);
    }

    for (int i = 0; i < TAMA ; i+=2) 
    {
        sumaPar += arre[i];
        if (i+1 < TAMA)
        {
            sumaImpar += arre[i + 1];
        }
        
    }
    
    

    return 0;
}