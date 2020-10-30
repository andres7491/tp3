#include<stdio.h>
#define TAMA 6

int main(){
int arre[TAMA];

printf("Ingrese 20 numeros entereos:");
for (int i=0; i<TAMA;i++){
    printf("\n arre[%d]:",i);
     scanf("%d",&arre[i]);
    
  
}
printf("El arreglo ingresado es: ");

for(int i=0;i<TAMA;i++){
     
    

    printf("\n %d",i,arre[i*2]);

}

return 0;
}