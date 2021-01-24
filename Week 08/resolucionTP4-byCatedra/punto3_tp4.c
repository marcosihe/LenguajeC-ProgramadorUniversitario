/*******************************************/
//Punto 3 - 
//Un psiquiatra tiene un paciente que habla invirtiendo las frases completas. 
//Por ejemplo: si quiere decir “hola doctor”, lo que realmente dice es: “rotcod aloh”. 
/*******************************************/

#include <stdio.h>
#include<string.h>
#define MAX 50

int main(){
    char frase[MAX];
    char convertida[MAX];
    int j=0, longitud, auxiliar;

    printf("Ingrese una frase: \n ");
    fflush(stdin);
    gets(frase);
    //cuento la longitud de la frase para saber la posicion donde esta ubicado el ultimo caracter 
    longitud =  strlen(frase);

    //USANDO VECTOR AUXILIAR
    for (int i = longitud-1; i >= 0; i--)
    {
        convertida[j]= frase[i];
        j++;
    }
    
    //USANDO EL MISMO VECTOR (me muevo desde los extremos hasta llegar al medio del vector)
    for(int izq = 0, der = longitud -1; izq < (longitud/2); izq++, der--)
    {
        auxiliar = frase[izq];
        frase[izq] = frase[der];
        frase[der] = auxiliar;
    }

    printf("\nLa longitud de la cadena es=> %d \n", strlen(frase));
    puts(convertida);
    puts(frase);

	return 0;
}