#include<stdio.h>

int main(){

int i,numero,resto;

printf("numero invertido");

printf("\n ingrese un numero: ");
scanf("%d",&numero);

i=0;
while(numero>0){
i++;
resto=numero%10;
numero/=10;
printf("%i",resto);


}
return 0;


}