#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// este programa puede modificar las matrices que desees // suma o resta  muestra matriz y el resultado
int main() {
    int largo = 0;
    int ancho = 0;
    printf("\nIngrese el largo que desee para la matriz: ");
    scanf("%i", &largo);
    printf("Ingrese el ancho que desee para la matriz: ");
    scanf("%i", &ancho);

    int a[largo][ancho];
    int b[largo][ancho];
    int suma[largo][ancho];

     for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            printf("Ingresa Valor de a: ");
            scanf("%i", &a[i][j]);
        }
    }
    
    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            printf("Ingresa valor de b: ");
            scanf("%i", &b[i][j]);
        }
    }

    for (int i = 0; i < largo; i++) {
        for (int j = 0; j < ancho; j++) {
            suma[i][j] = a[i][j] + b[i][j];
        }
    }


    printf("\n\nMatriz A:\n\n");
// operación para mostrar matriz A
    for (int i = 0; i < largo; i++) {
        printf("|");
        for (int j = 0; j < ancho; j++) {
            printf("\t%i", a[i][j]);
        }
        printf("|\n");
    }
    printf("\n\nMatriz B:\n\n");

// operación para mostrar matriz B
    for (int i = 0; i < largo; i++) {
        printf("|");
        for (int j = 0; j < ancho; j++) {
            printf("\t%i", b[i][j]);
        }
        printf("|\n");
    }

    printf("\n\nMatriz Suma:\n\n");
// operación para mostrar matriz A
    for (int i = 0; i < largo; i++) {
        printf("|");
        for (int j = 0; j < ancho; j++) {
            printf("\t%i", suma[i][j]);
        }
        printf("|\n");
    }

    return 0;
}
