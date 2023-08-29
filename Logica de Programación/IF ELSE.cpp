// ESCOM , FUNDAMENTOS DE PROGRAMACION , LENGUAJE C
//SENTENCIAS , COMBINACIONES , IF ELSE
#include <stdio.h>
int main(){
	int edad =0;
	printf("\nBienvenido a SUMO");
	printf("\nIngresa tu edad: ");
	scanf("%i",&edad);
	
	if(edad>=18){		//Se abren paretesis es porque aqui se ejecutara el ciclo 
	printf("\nPuedes ingresar");
	}
	else if(edad==17){
		printf("\nDeposita un cambio para darte acceso");
	}
	else{
		printf("LARGO DE AQUI PLEBELLO");
	}
	
	
	return 0;
	
}
