#include <stdio.h>

char minusc_a_mayusc(char c1)
{
    char c2;

    c2= (c1>='a' && c1<='z')? ('A'+c1-'a'):c1;

return(c2);

}

main()
{
    char minusc, mayusc;
    printf("por favor, introduce una letra minuscula: ");
    scanf("%c",&minusc);
    mayusc=minusc_a_mayusc(minusc);
    printf("\nLa Mayuscula equivalente es %c\n\n", mayusc);

    // falta return 0;

}

// El ejercicio pedía transformar una frase, no solamente convertir una letra. La idea es que aprendan a trbajar secuencias
// Diseñe un algoritmo donde dada una frase finalizada en punto, si una palabra comienza
// con vocal se transforme a mayúscula