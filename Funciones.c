#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//ENTRADA CON SALIDA
//Primero el tipo de dato que sale de la función
//despues el nombre de la función
//el tipo de dato que llega y un nombre para esa varibale
//dentro de las llaves van los procesos
int por5(int numero){

   return numero * 5; 
}
  
int pedirDato(){
  int dato = 0;
    printf("Ingresa un numero entero: ");
    scanf("%i",&dato);
    return dato;

}
int main (){
    int x = pedirDato();
// hay que hacer llamado de funciones 
   int resultado =  por5(x);
printf("\n%i",resultado);
    return 0;
} 

