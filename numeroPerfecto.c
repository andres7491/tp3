#include <stdio.h>
#include <conio.h>

int main()
{
    int x, num, suma = 0;

    printf("digite un numero: ");
    scanf("%d", &num);
    for (x = 1; x < num; x++)
    {
        if (num % x == 0)
        {
            suma += x;
        }
    }
    if (suma == num)
    {
        printf("\nEl numero es perfecto");
    }
    else
    {
        printf("\nEl numero no es perfecto");
    }

    return 0;
}
