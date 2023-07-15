#include<stdio.h>

int main(){
    int i;
    int lista[5]= {1,2,3,4,5};
    int soma = 0;

    for(i=0;i<5;i++){
        soma = soma + lista[i];
    }
    printf("Soma: %d\n", soma);
    return 0;
}