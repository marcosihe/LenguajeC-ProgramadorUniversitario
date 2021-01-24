/*******************************************/
//Punto b
//Cargue un arreglo con 20 números enteros, 
//calcule y muestre por pantalla la suma de los valores que hay en posiciones pares del mismo (0,2,..) 
//y la suma de los valores que hay en posiciones impares del array.
// Modifique el programa para que el número de valores no sea fijo sino que se lea como entrada y sea como máximo 20. 
/*******************************************/
#include <stdio.h>
#include <stdlib.h>
#define MAX 20

int main(){

	int tamanio, i, sumaPares=0, sumaImpares=0;
    int vectorNumero[MAX];

    do
    {
        printf("Ingrese el tamanio del vector (<=20): ");
	    scanf("%d", &tamanio);
    } while (tamanio > 20);
    
    //cargamos el vector con numeros enteros
    for (i = 0; i < tamanio ; i++)
    {
        vectorNumero[i] = i+1;
    }
    //muestro los valores del vector
    for (i = 0; i < tamanio ; i++)
    {
        printf("[%d]= %d \t", i,vectorNumero[i]);
    }

    for (i = 0; i < tamanio ; i++)
    {
        if(i%2 == 0){
            //posicion par
            sumaPares = sumaPares + vectorNumero[i];
        }else{
            //posicion impar
            sumaImpares = sumaImpares + vectorNumero[i];
        }
    }

    printf("\nSuma de valores con indice par => %d \n", sumaPares);
    printf("Suma de valores con indice impar => %d \n", sumaImpares);
    
	return 0;
}


