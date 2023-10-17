#include <stdio.h>
#include <stdlib.h>
#include <math.h>

  //ENTRADA SIN SALIDA O SIN ENTRADA Y SIN SALIDA
float pedirDato(){
  int  dato = 0;
    printf("Ingresa un numero : ");
    scanf("%i",&dato);
    return dato;

}

float pedirDatoFloat(){
  float  dato = 0;
    printf("Ingresa un numero : ");
    scanf("%f",&dato);
    return dato;

}
float sumaDosnumeros(float numero1, float numero2){
    return numero1 + numero2;
}

int main (){
    float x = pedirDatoFloat();
    float y = pedirDatoFloat();
   sumaDosnumeros(x,y);
   float resultado = sumaDosnumeros(x,y);
printf("\n%.2f La suma de los dos numeros es:",resultado);
    return 0;
}