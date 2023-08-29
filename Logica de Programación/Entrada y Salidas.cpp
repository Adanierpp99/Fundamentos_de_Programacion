#include <stdio.h> //ALAN DANIEL PALMA PACHECO , ESCOM , FUNDAMENTOS DE PROGRAMACION , CIENCIA DE DATOS , ENTRADA Y SALIDA CON OPERACIONES BASICAS
int main (){
	
	//DECLARAR DONDE VOY A GUARDAR LA VARIABLE
	int numero = 0;
	 //solicitar el numero mediante la funcion scanf
	 //siempre agregar &a una variable que es la direccion
	 scanf("%i",&numero);
	
	//mostrar el valor que te dio para ver si se guardo bien 
	printf("la variable del numero es %i", numero);
	
	
	float x = 0;
	printf("\ningresa un numero");
	scanf("%f", &x);
    printf("la variable del numero es %f",x);
	
return 0;		
}


