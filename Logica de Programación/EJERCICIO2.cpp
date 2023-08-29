// EJERCICIO 2 , CALCULA LA DISTANCIA ENTRE DOS PUNTOS, ESCOM , ALAN DANIEL PALMA PACHECO
#include <math.h>
#include<stdio.h>
int main(){
	
	
	
	float x1,y1,x2,y2 = 0;
	
	
	printf("\nIngrese el primer numero  en el plano  x que es: ");
	scanf("%f", &x1);
	printf("\nIngrese el segundo numero en el  plano y  que es: ");
	scanf("%f",&y1);
	
		
	printf("\nIngrese el primer numero en el segundo plano que es: ");
	scanf("%f",&x2);
	printf("\nIngrese el segund numero en el segundo plano que es: ");
	scanf("%f",&y2);
	
	
	float  r1 =x2-x1;
	float  r2 =y2-y1;
	float  p1 =pow(r1,2);
	float  p2 =pow(r2,2);
	float s1 = p1 + p2;
	float raiz = sqrt(s1);
	
	
	printf("\nLa distancia recorrida entre los dos puntos es: %f ",raiz);
	
	return  0;
	
}
