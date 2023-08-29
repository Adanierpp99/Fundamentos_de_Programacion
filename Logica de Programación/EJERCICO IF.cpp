//EJERCICIO IF , ELSE IF , ELSE
#include <stdio.h>
int main(){
	
int edad = 0;

printf("RECOMENDADOR DE SERIES");
printf("\nIngresa tu edad: ");
scanf("%i",&edad);
// el doble && significa 'y'
if(edad>=0 && edad<=10){
	printf("\nTe recomiendo ver malcom");
}
else if(edad>10 && edad<=20){
	printf("\nTe recomiendo ver las wwe");
}
else if(edad>21 && edad<=30){
	printf("\nTe recomiendo ver the office");
}
else{
	printf("\nYa estas grande ponte a leer");
}
	return 0;
}
