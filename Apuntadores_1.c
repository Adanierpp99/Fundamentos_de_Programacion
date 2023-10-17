#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//funciones y punteros 
void cuadrado(int *p){
*p = *p * *p;
}
void pedirValor(int *p){
    printf("Ingrese un valor: ");
    scanf("%i", p);
}
int main(){

int x;
int *p;
p = &x;

pedirValor(p);


printf("El valor original es: %i ",x);

cuadrado(p);

printf("Valor despues de la funcion  es: %i",x);
    return 0;
}