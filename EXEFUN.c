#include <stdio.h>


float pedirSueldo(){
   float sueldo = 0; 
   printf("Ingresa el sueldo del trabajador: ");
   scanf("%f",&sueldo);
   return sueldo;
}

float modificarSueldo(float sueldo){
 float nuevoSueldo = 0;
 if (sueldo <1000){
    nuevoSueldo = (sueldo*.15)+sueldo;
 }
 else{
    nuevoSueldo = (sueldo*.12)+sueldo;
 }
 return nuevoSueldo;
}


int main (){
// crear varibale sueldo y llamar a la funcion

float sueldo = pedirSueldo();

sueldo = modificarSueldo(sueldo);

printf("El nuevo sueldo es:  %.2f",sueldo);

    return 0;
}