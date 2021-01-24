//TP3 - 1: NUMERO INVERTIDO
#include<stdio.h>

int invertirNumero(int numero); 

int main()
{
    int numero;

    printf("\n NUMERO INVERTIDO \n");
    printf("\n Ingrese el numero de 4 digitos: ");
    scanf("%d",&numero);

    printf("\n El numero Invertido es = %d ", invertirNumero(numero));
       
    return 0;
}



//DEFINICION DE FUNCIONES

int invertirNumero(int numero)
{
    int invertido, digito;
    invertido=0;
    while(numero > 0){
        digito = numero % 10;
        numero = numero / 10;
        invertido = invertido *10 + digito;
    }
    return invertido; 
} 

