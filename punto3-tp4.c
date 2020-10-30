#include <stdio.h>

int main(){
    int i,j;
    char a[20];//tamaño
    for(i=0;(a[i]=getchar())!='\n';i++);

    for(j=i;j>=0;j--)
    printf("%c",a[j]);


}