/*
Dado el nombre completo de una persona de la forma: “Vega Zavala, Maria
Emilia Valentina”. Escriba una función que devuelva los siguientes datos:
- La cantidad de apellidos.
- La cantidad de nombres.
- El nombre completo convertido de la forma: “VEGA ZAVALA, Maria Emilia Valentina”
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define max 100

void analizarNombre(char *nombreCompleto, int *cantNombres, int *cantApellidos);

int main()
{
    char nombreCompleto[max];
    int cantNombres = 0, cantApellidos = 0;

    printf("Ingrese su nombre completo de la forma: \"Apellidos, Nombres\" \n");
    gets(nombreCompleto);
    //INVOCO A LA FUNCION 
    analizarNombre(nombreCompleto, &cantNombres, &cantApellidos);
    //MUESTRO LA INFORMACION SOLICITADA
    puts(nombreCompleto);
    printf("\nCantidad de Nombres => %d", cantNombres);
    printf("\nCantidad de Apellidos => %d", cantApellidos);

    return 0;
}

void analizarNombre(char *nombreCompleto, int *cantNombres, int *cantApellidos)
{
        //diseño que funciona para cadenas de la forma: “VEGA ZAVALA, Maria Emilia Valentina” (sin espacios adicionales)
        //ANALIZO LA PRIMERA PARTE DE LA CADENA (hasta la coma)
        while (*nombreCompleto != 44) //coma
        {
            if (*nombreCompleto != 32 ) //vacio
                *nombreCompleto = toupper(*nombreCompleto);
            else{
                if (*nombreCompleto == 32) //es vacio 
                {
                    *cantApellidos = *cantApellidos + 1;
                }
            }
            nombreCompleto++;
        }
        //sale porque encuentra la coma entonces incremento apellido.
        *cantApellidos = *cantApellidos + 1;
        nombreCompleto = nombreCompleto+2; //muevo dos lugares hasta el inicio del nombre
       
        //ANALIZO LA SEGUNDA PARTE DE LA CADENA (hasta la marca final)
        while (*nombreCompleto != '\0')
        {
            if (*nombreCompleto == 32) //vacio
                *cantNombres = *cantNombres + 1;
            nombreCompleto++;
        }
        //sale por marca final, sumo al nombre
        *cantNombres = *cantNombres + 1;
}
