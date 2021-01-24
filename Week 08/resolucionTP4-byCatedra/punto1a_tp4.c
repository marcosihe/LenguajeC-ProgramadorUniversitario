/*******************************************/
//Punto a
//Cargue un vector de números enteros, vectorNumero, con elementos 
//ser múltiplos de 6 y estar comprendidos en el intervalo [0,200]. 
//Modifique el algoritmo anterior, para vectores de distintos tamaños y distintos valores del múltiplo.
/*******************************************/
#include <stdio.h>
#define MAX 100

int main(){

	int multiplo, tamanio, numero=1, i, control=1;
    int vectorNumero[MAX];

	printf("Ingrese el tamanio del vector: \n ");
	scanf("%d", &tamanio);
	printf("Ingrese un numero para calcular sus multiplos: \n ");
	scanf("%d", &multiplo);
     
    //controlo que solo guarde los numeros hasta 200
    for (i = 0; i < tamanio && control ==1 ; i++)
    {
        numero = i * multiplo;
        if(numero<=200){
            vectorNumero[i]=numero;
            printf("%d %d \n", i, vectorNumero[i]);
        }else{
            control = 0;
        }
    }
    
	return 0;
}


