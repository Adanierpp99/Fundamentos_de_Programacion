//EJERCICIO 
//PROGRAMA QUE PARA QUE PIDA AL USUARIO DOS NUMEROS ENTEROS Y
//QUE MUESTRE LA SUMA ,RESTA,MULTIPLICACION, Y DIVISION ENTRE ELLOS

#include<stdio.h>
int main(){
	
	int x  = 0;
	int y  = 0;
	
	
	printf("\n\tINGRESE EL PRIMER NUMERO: ");
	scanf("%i", &x);
		
	printf("\n\tINGRESE EL SEGUNDO NUMERO: ");
	scanf("%i", &y);
	
	// REALIZAR LAS OPERACIONES
	
	
	int s = x + y;
	int r = x - y;
    int m = x * y;
    float d = x / y;
    
    printf("\nEl valor de la suma de los dos numeros es: %i",s);
    printf("\nEl valor de la resta  de los dos numeros es: %i",r);
    printf("\nEl valor de la multiplicacion de los dos numeros es: %i",m);
    printf("\nEl valor de la division  de los dos numeros es: %f",d);
	
	return 0;
	
}
