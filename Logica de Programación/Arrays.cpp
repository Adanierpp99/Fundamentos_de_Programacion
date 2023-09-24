//Arreglos
#include <stdio.h>
int main(){
	
char name [20]; //arrays
int age;
float  height;
char rfc[14];  //arrays
	
printf("\nIngresa tu nombre: ");
scanf("%s",&name);
printf("\nIngresa tu edad: ");
scanf("%i",&age);
printf("\nIngresa tu altura: ");
scanf("%f",&height);
printf("\nIngresa tu RFC: ");
scanf("%s", &rfc);
printf("NOMBRE\t EDAD\t  ESTATURA\t RFC");
printf("\n--------------------------------");
printf("\n%s\t %i\t %.2f\t\t  %s", name, age, height, rfc);


	return 0;
}
