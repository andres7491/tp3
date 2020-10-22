#include <conio.h>   // no hace falta
#include <stdio.h>

int main()

{
    int anio;

    printf("\n Introduzca un año");

    scanf("%d", &anio);

    if((anio%4==0 && anio%100!=0)||(anio%400==0)){

    printf("\n ES BISIESTO: %d", anio);
    }
    else
    {
        printf("\n NO ES BISIESTO:%d", anio);
    }
    
  
return 0;



}