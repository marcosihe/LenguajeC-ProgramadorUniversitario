#include<stdio.h>
#include<string.h>

struct tipo
{
    char nombre_cientifico[50];
    char categoria[50];
    char nombre_vulgar[50];
    char clima[50];
    int cantidad;
};
typedef struct tipo arbol;

void cargarArreglo(arbol *, int);
void mostrarDato(arbol *);
void mostrarArreglo(arbol *, int);
void mostrarArbolesByCategoria(arbol *, char *, int);


int main()
{
    arbol arreglo[50], *p_arreglo;
    int cantidad;
    char categoria[50];
    
    //inicializo el puntero
    p_arreglo = arreglo;

    printf("Ingrese la cantidad de datos a cargar: ");
    scanf("%d", &cantidad);

    cargarArreglo(p_arreglo, cantidad);
    mostrarArreglo(p_arreglo, cantidad);

    printf("Ingrese una categoria para buscar todas los arboles disponibles: ");
    fflush(stdin);
    gets(categoria);
    mostrarArbolesByCategoria(p_arreglo, categoria, cantidad);

    return 0;
}

void cargarArreglo(arbol * arrePunt, int n)
{
    for (int i = 0; i < n; i++)
    {
         //cargar toda la informacion de la variable tipo struct remedio
        printf("------------INGRESE LOS DATOS DEL ARBOL [%d]---------------\n", i+1);
        printf("Nombre Cientifico: ");
        fflush(stdin);
        gets(arrePunt->nombre_cientifico);

        printf("Categoria: ");
        fflush(stdin);
        gets(arrePunt->categoria);

        printf("Nombre Vulgar: ");
        fflush(stdin);
        gets(arrePunt->nombre_vulgar);

        printf("Clima: ");
        fflush(stdin);
        gets(arrePunt->clima);

        printf("Cantidad: ");
        scanf("%d", &arrePunt->cantidad);

        //desplazo el puntero a la proxima posicion para continuar con la carga
        arrePunt++;
    }
}

void mostrarDato(arbol * arrePunt)
{
        //mostrar  todos los arboles cargados
        printf("Nombre Cientifico: ");
        puts(arrePunt->nombre_cientifico);

        printf("Categoria: ");
        puts(arrePunt->categoria);

        printf("Nombre Vulgar: ");
        puts(arrePunt->nombre_vulgar);

        printf("Clima: ");
        puts(arrePunt->clima);

        printf("Cantidad: %d \n", arrePunt->cantidad);
}

void mostrarArreglo(arbol * arrePunt, int n)
{
    printf("\n*******************MOSTRANDO DATOS DEL ARREGLO*******************************\n");
    for (int i = 0; i < n; i++)
    {
        //mostrar  todos los arboles cargados
        printf("------------ARBOL [%d]---------------\n", i+1);

        //invoco a la funcion que muestra de forma individual
        mostrarDato(arrePunt);

        //desplazo el puntero a la proxima posicion para continuar con la carga
        arrePunt++;
    }
}

void mostrarArbolesByCategoria(arbol *arrePunt, char *cadena, int n)
{
    printf("\n **************Arboles disponibles para la categoria [%s]************************ \n", cadena);
    for (int i = 0; i < n; i++)
    {
        printf("------------ARBOL [%d]---------------\n", i+1);
        if (strcmp(arrePunt->categoria, cadena)==0)
        {
            //controlo stock
            if (arrePunt->cantidad < 3)
            {
                arrePunt->cantidad = arrePunt->cantidad + 5;
            }
            //muestro el dato haciendo uso de la función que muestra solo un dato de tipo arbol
            mostrarDato(arrePunt);
        }
        arrePunt++;
    }
}



