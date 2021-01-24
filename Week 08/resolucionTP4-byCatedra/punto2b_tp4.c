/*******************************************/
//Punto b
// Dado un nombre completo, cuente la cantidad de vocales, de cada una, que hay en el mismo. 
// Una vez que su programa funcione, modifique el código de modo que haga la misma tarea con los nombres de todos los estudiantes de la materia Programación 
// y determine quién es el que mayor cantidad total de vocales tiene en su nombre.
/*******************************************/

#include <stdio.h>
#include <string.h>
#define MAX 50

int main(){
    char nombreCompleto[MAX];
    char nombreMayor[MAX];
    int i, cantidad;
    int cant_a=0, cant_e=0, cant_i=0, cant_o=0, cant_u=0;
    int vocalesMayor = 0, totalVocales;

    printf("Ingrese la cantidad de alumnos de la materia: ");
    scanf("%d", &cantidad);

    for (int j = 1; j <= cantidad; j++)
    {
        /* code */
        printf("Ingrese nombre completo - Estudiante[%d]: ", j);
        fflush(stdin);
        gets(nombreCompleto);
        i=0;
        while (nombreCompleto[i] != '\0')
        {
            switch (nombreCompleto[i])
            {
            case 'A':
            case 'a': cant_a ++;
                break;
            case 'E':
            case 'e': cant_e ++;
                break;
            case 'I':
            case 'i': cant_i ++;
                break;
            case 'O':
            case 'o': cant_o ++;
                break;
            case 'U':
            case 'u': cant_u ++;
                break;
            }
            i++;
        }
        totalVocales = cant_a+cant_e+cant_i+cant_o+cant_u;
        if(totalVocales > vocalesMayor){
            vocalesMayor = totalVocales;
            //guardo el nombre tambien
            strcpy(nombreMayor, nombreCompleto);
        }

        // printf("A: %d \n", cant_a);
        // printf("E: %d \n", cant_e);
        // printf("I: %d \n", cant_i);
        // printf("O: %d \n", cant_o);
        // printf("U: %d \n", cant_u);
        //Inicializo en 0 todos los contadores para la proxima iteración(alumno)
        cant_a=0;
        cant_e=0;
        cant_i=0;
        cant_o=0;
        cant_u=0;
    }
    //Muestro los datos pedidos
    puts("*****************************");
    puts(nombreMayor);
    printf("Tiene %d vocales \n", vocalesMayor);
    
	return 0;
}