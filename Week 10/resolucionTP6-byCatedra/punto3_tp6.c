/*
Realice una función que reciba un arreglo de n números flotantes (creado de forma
dinámica) que representan el caudal de lluvia caído por dia, y devuelva:
El valor máximo, el valor mínimo, y el promedio de lluvia caída en el periodo.
*/
#include<stdio.h>
#include<stdlib.h>
#define max 100

void analizarDatos(float *lluvias, float *menor, float *mayor, float *promedio);
int n;

int main()
{
    float *p_lluvia;
    float menor=0, mayor=0, promedio = 0;
   
    puts("Ingrese la cantidad de dias que desea analizar");
    scanf("%d", &n);

    // CREO ARREGLO/PUNTERO DE FORMA DINAMICA
    p_lluvia = malloc(n*sizeof(float));

    //cargo arreglos de cantidades y precio individual
    for (int i = 0; i < n; i++)
    {
        printf("----Dia %d-----\n", i+1);
        printf("\nIngrese la cantidad de lluvia caida: ");
        scanf("%f", &p_lluvia[i]);
    }

    //invocar a la funcion 
    analizarDatos(p_lluvia, &menor, &mayor, &promedio);

    //muestro datos pedidos
    puts("----------------------------------------------");
    printf("Menor Valor de lluvia caida: %.2f \n", menor);
    printf("Mayor Valor de lluvia caida: %.2f \n", mayor);
    printf("Promedio de lluvia caida en el periodo ingresado: %.2f \n", promedio);

    //LIBERO MEMORIA 
    free(p_lluvia); 

    return 0;
}


void analizarDatos(float *lluvias, float *menor, float *mayor, float *promedio)
{
    float suma=0;
    *mayor = *lluvias;
    *menor = *mayor;

    for (int i = 0; i < n; i++)
    {
        if (*lluvias > *mayor)
        {
            *mayor = *lluvias;
        }
        if (*lluvias < *menor)
        {
            *menor = *lluvias;
        }
        suma = suma + *lluvias;
        lluvias++;
    }
    *promedio = suma /n;
    
}



