//EJERCICIO 5 - TP2
#include <stdio.h>

int main() {
	int num1, num2, numeros, pares, suma_impares, aux;
    numeros = 0;
    pares = 0;
    suma_impares = 0;

	printf("Ingrese un numero entero: \n");
	scanf("%d", &num1);
    printf("Ingrese otro numero entero: \n");
	scanf("%d", &num2);
	//controlar si num1 es el mayor y ordenar
    if(num1 > num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
	for (int i = num1; i <= num2; i++)
    {
        if(i%2 == 0)    
            pares ++;
        else
            suma_impares = suma_impares + i;
    }
    //calcular los numeros del rango
    numeros = (num2-num1)+1;
    			
	//ESCRIBIR LOS VALORES DE SALIDA
	printf("\nEl rango ingresado contiene %d numeros", numeros);
	printf("\nEl rango ingresado contiene %d numeros pares", pares);
	printf("\nLa suma de los numeros impares del rango es => %d", suma_impares);

	return 0;
}

