/*******************************************/
//Punto a
// Dado el nombre y el apellido de una persona, por separado, unirlos en una única cadena. 
// No use la función strcat().
/*******************************************/

#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){
    char nombre[MAX];
    char apellido[MAX];
    char nombreCompleto[MAX];
    int i,j;

    puts("Ingrese su Nombre: ");
    fflush(stdin);
    gets(nombre);
    puts("Ingrese su Apellido: ");
    fflush(stdin);
    gets(apellido);
    i=0;
    while (nombre[i] != '\0')
    {
        nombreCompleto[i]= nombre[i];
        i++; 
    }
    //El while anterior se puede reemplazar haciendo uso de la función strcpy
    // strcpy(nombreCompleto, nombre);
    // i=strlen(nombre);
   
    nombreCompleto[i]=' ';
    i++;
    j=0;
    while (apellido[j] != '\0')
    {
        nombreCompleto[i]= apellido[j];
        i++; 
        j++;
    }
    printf("\nSu nombre completo es: ");
    puts(nombreCompleto);

	return 0;
}