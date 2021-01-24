/*
Problema 4: Escriba un programa que dada una cadena de caracteres que representa el nombre de una entidad, 
devuelva el acrónimo de la misma en mayúsculas. Por ejemplo:
Entrada:_ _ _ Martinez_ _ Juarez_ y_ _asociados
Salida: M.J.Y.A.
*/

#include <stdio.h>
#include<ctype.h>
#define max 50

int main()
{   char entidad[max],acronimo[7];
    char *p_entidad, *p_acronimo;

    puts("Ingrese el nombre de la entidad:");
    fflush(stdin);
    gets(entidad);

    p_entidad = entidad;
    p_acronimo = acronimo;
    while (*p_entidad != '\0')
    {
        while(*p_entidad == ' '){
            p_entidad++;
        }
        *p_acronimo = toupper(*(p_entidad++));
        p_acronimo++;
        *p_acronimo = '.';
        p_acronimo++;
        while (*p_entidad != ' ' && *p_entidad != '\0')
        {
            p_entidad++;
        }
    }
    // *p_acronimo = '\0';
    puts(acronimo);
    
    return 0;
}