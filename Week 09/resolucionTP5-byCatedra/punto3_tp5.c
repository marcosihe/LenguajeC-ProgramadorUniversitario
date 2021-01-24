/*
Problema 3: Diseñe un algoritmo que le permita obtener las siguientes medidas estadísticas en un arreglo numérico de una dimensión:  
El valor máximo,  el valor mínimo,  el promedio de los elementos del arreglo y  la cantidad de elementos que superan el promedio. 
Implemente en C.
*/
#include<stdio.h>
#define max 50
int main()
{
	int numeros[max], *p_num;
	int n, mayor = 0, menor = 9999, suma = 0, supera_promedio=0;
	float promedio;

	printf("Cantidad de numeros a ingresar: \n ");
	scanf("%d", &n);
    //asigno el puntero al arreglo de numeros
	p_num =  numeros;
	//cargo el arreglo de numeros (puntero indexado)
	for (int i=0; i<n; i++){
		printf("\nIngrese numeros[%d] = ", i);
		scanf("%d", &p_num[i]);
	}
	
    //analizo los datos 
	for(int i=0; i<n; i++){
		if(*p_num > mayor){
			mayor = *p_num;
		}
		if(*p_num < menor){
			menor = *p_num;
		}
		suma = suma + *p_num;
		p_num++;
	}
	promedio = suma/n;
    //con el promedio calculado busco los numeros que la superan
	p_num =  numeros; //posiciono nuevamente el puntero
	for(int i=0; i<n; i++){
		if(*p_num > promedio){
			supera_promedio++;
		}
		p_num++;
	}

	printf("\nEl MAYOR de los elementos es: %d", mayor);
	printf("\nEl MENOR de los elementos es: %d", menor);
	printf("\nEl PROMEDIO de los elementos es: %.2f", promedio);
	printf("\nCantidad de elementos que superan el PROMEDIO son: %d", supera_promedio);

	return 0;
}