/*
Lea una línea de texto en minúsculas con la función gets, la almacene en un arreglo de caracteres de nombre cad [100]. 
Luego, cuente las consonantes presentes y convierta a mayúsculas.
*/

#include <stdio.h>
#include<ctype.h>

int esVocal (char caracter);


int main()
{   char cad[100];
    int j, consonantes = 0;
    char *punt; //01

    //02
    punt = &cad[0];
    punt = cad;

    puts("Ingrese una frase:");
    fflush(stdin);
    gets(cad);

    //03
    printf("----------------03-------------------------\n");
    printf("Direccion de la variable puntero punt: %p \n", &punt);
    printf("Direccion de cad[0]: %p \n", punt);
    printf("Contenido de cad[0]: %c \n", *punt);

    //04
    printf("------------------04-----------------------\n");
    printf("Notacion arreglo - cad[4]: %c \n", cad[4]);
    printf("Notacion de puntero - cad[4]: %c \n", *(punt+4));

    //05
    printf("------------------05-----------------------\n");
    printf("Direccion punt+3: %p \n", punt+3);
    printf("Valor de punt+3: %c \n", *(punt+3));

    //06
    printf("------------------06-----------------------\n");
    while (*punt != '\0')
    {
        putchar(*punt);
        punt++;
    }
    
    //07
    printf("\n------------------07-----------------------\n");
    punt = cad; //posiciono el puntero al principio
    for (int i = 0; punt[i] != '\0'; i++)
    {
        printf("%c",punt[i]);
    }
    

    //ejercicio original
    printf("\n------------------ejercicio original-------------------\n");
    j=0;
    while (cad[j] != '\0')
    {
        if (isalpha(cad[j]) && esVocal(cad[j])==0)
        {
            consonantes++;
            cad[j] = toupper(cad[j]);
        }
        printf("%c",cad[j]);
        j++;
    }
    printf("\nCantidad de consonantes: %d", consonantes);

    
    return 0;
}

int esVocal (char caracter)
{
    switch (caracter)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u': 
        case 'U': return 1;
        break;
        default: return 0;
        break;
    }
}