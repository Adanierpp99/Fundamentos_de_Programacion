//ALAN DANIEL PALMA PACHECO , ESCOM , FUNDAMENTOS PROGRAMACION , CICLOS
// WHILE (CUANDO NO SEPAMOS CUANTAS VECES SE VA REPETIR UN PROCESO)
//FOR (CUANDO SI SEPAMOS CUANTAS VECES SE VA REPETIR UN PROCESO)
#include <stdio.h>
int main(){
	
	//crea un programa que se detenga hasta que el usuario ingrese la letra x
	// \0 significa que un valor es nulo
	// != significa que es diferente de
	char  letra = '\0';
	while(letra != 'x' && letra != 'X'){ 
		scanf("%c",&letra);
	}
		printf("\n\tEl programa se acabo");
	
	return 0;
	
}
