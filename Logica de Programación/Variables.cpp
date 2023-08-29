//ALAN DANIEL PALMA PACHECO , FUNDAMENTOS DE PROGRAMACION , ESCOM , CIENCIA DE DATOS//


#include <stdio.h>
int main ()
{

	printf("HOLA");	//---> esa función sirve para imprimir el resultado de alguna operación o o palabras
	printf("\n este es mi primer programa"); //---> la diagonal y la letra "n" harán que el texto ó lo que imprimas se ajuste

// tipo de datos //
// INT =  (int) NUMEROS ENTEROS -1 <> +1 Y SE USA INT
// REAL = (float) (7 DECIMALES)  Y (double )(15 )  (AMBOS PARA PUNTO DECIMAL)
// CHAR = (char) caracter
// VOID = (void) sin valor 


//variable numeros 
	float  pi = 3.14;
//	printf ("%f"); //--> el porcentaje  es la direccion para imprimir y la letra f es para identificar que es float y despues ecribes un coma
//	tal cual una coma --> "," para que imprima la varibale 

    printf ("\n\t%f",pi);
	
float euler =2.17 ;
printf ("\n\t el valor de la variable es %f",euler);

//variables de char

char letra = '&';
printf ("\n\t el nombre de la variable es %c",letra);



//declarar variable donde vy a guardar el dato
int numero = 0;

//solicitar el valor  mediante la funcion scanf
//siempre agregue el valor '&' de una variable
scanf ("\n\t %i",&numero);


	return 0;
}



