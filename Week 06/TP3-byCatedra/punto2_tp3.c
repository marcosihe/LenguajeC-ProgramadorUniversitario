#include<stdio.h>

int esPerfecto(int n);

int main()
{
    int i, resultado;
    
    printf("\n*****NUMEROS PERFECTOS***** \n");
    for (i=1;i<=100;i++)
    { 
        resultado = esPerfecto(i);
        if (resultado == 1)
            printf(" %d Es un numero perfecto \n",i);
    } 
    return 0;
}


int esPerfecto(int numero)
{
    int i, suma;
    suma = 0;
   
    for (i=1;i<numero;i++)
    {
        if (numero%i==0)
            suma=suma+i;
    }
    if(suma == numero)
        return 1;
    else
        return 0;
}