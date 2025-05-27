
#include <stdio.h>


void recursivo (int numero) {

if ( numero > 10){

printf("%d\n", numero);

recursivo(numero - 1);
}

printf("\n");

}



int main() {

int quantidade = 20;

printf("Contagem Regressiva...\n");


recursivo(quantidade);





return  0;
}