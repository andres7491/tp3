#include<stdio.h>
#define MAX 33

int main(){
int vector[MAX];

for (int i=0; i<MAX;i++){

    vector[i]=(6*i);
}
printf("\n");

for(int i=0;i<MAX;i++){
    printf("%d \t",vector[i]);

}

return 0;
}