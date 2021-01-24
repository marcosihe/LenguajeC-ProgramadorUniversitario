/*Escribir un programa que permita ingresar 5 cadenas que contengan
un número de 1 digito seguido de un guión y a continuación una letra mayúscula
(ejemplo “8-H”). Luego, para cada cadena ingresada, almacenar los números en un
arreglo de enteros y los caracteres en un arreglo de caracteres.*/

#include <stdio.h>
#include <ctype.h>
#define max 6

int main()
{   char cadena[max], letras[max];
    int digitos[max];
    char *p_cadena, *p_letras;

    p_letras = letras;

    for (int i = 0; i < 5; i++)
    {
        puts("Ingrese la cadena");
        fflush(stdin);
        gets(cadena);
        //por cada iteracion asigno la cadena al puntero
        p_cadena = cadena;
        //Para convertir el caracter en entero uso esta operacion que resta los valores ascii de los caracteres: '0'= 48
        digitos[i] = *p_cadena-'0'; 
        *(p_letras++) = toupper(*(p_cadena+2));  
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", digitos[i]);
    }
    printf("\n");
    p_letras = letras; //posiciono el puntero al inicio
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", p_letras[i]); //puntero indexado
    }
    
    return 0;
}
