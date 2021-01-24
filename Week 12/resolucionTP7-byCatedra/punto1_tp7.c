#include<stdio.h>
#include<string.h>

struct fecha
{
    int dia;
    int mes;
    int anio;
};

struct remedio
{
    char nombre[50];
    char presentacion[50];
    char laboratorio[50];
    float precio;
    int stock;
    struct fecha vencimiento;
    char indicacion[50]; 
};

void cargarDato(struct remedio *);
void mostrarDato(struct remedio *);
void modificarDatoPrecio(struct remedio *);
void cargarArreglo(struct remedio *, int);
void mostrarArreglo(struct remedio *, int);
void contarArregloPresentacion(struct remedio *, int, int *);
void modificarArregloPrecio(struct remedio *, int);


int main()
{
    struct remedio dato, inventario[20], *p_inventario;
    int n_remedios, contar=0;

    p_inventario = inventario;
    printf("Ingrese la cantidad de medicamentos que desea cargar: ");
    scanf("%d", &n_remedios);

    cargarArreglo(p_inventario, n_remedios);
    mostrarArreglo(p_inventario, n_remedios);
   
    contarArregloPresentacion(p_inventario, n_remedios, &contar);
    printf("\nLa cantidad de medicamentos inyectables para tratar moquillo son: %d", contar);
    modificarArregloPrecio(p_inventario, n_remedios);
    
    printf("\n ************MUESTRO EL ARREGLO MODIFICADO**************\n");
    mostrarArreglo(p_inventario, n_remedios);

    // cargarDato(&dato);
    // mostrarDato(&dato);
    // modificarDatoPrecio(&dato);
    // mostrarDato(&dato);
    
    return 0;
}

void cargarDato(struct remedio *remedioPunt)
{
    //cargar toda la informacion de la variable tipo struct remedio
    printf("------------INGRESE LOS DATOS DEL REMEDIO---------------\n");
    printf("Nombre: ");
    fflush(stdin);
    gets(remedioPunt->nombre);
    printf("Presentacion: "); 
    fflush(stdin);
    gets(remedioPunt->presentacion);
    printf("Laboratorio: ");
    fflush(stdin);
    gets(remedioPunt->laboratorio);
    printf("Precio: ");
    fflush(stdin);
    scanf("%f", &remedioPunt->precio);
    printf("Stock: ");
    scanf("%d", &remedioPunt->stock);
    printf("Fecha de vencimiento (dd mm aaaa): ");
    scanf("%d %d %d", &remedioPunt->vencimiento.dia, &remedioPunt->vencimiento.mes, &remedioPunt->vencimiento.anio);
    printf("Indicación: ");
    fflush(stdin);
    gets(remedioPunt->indicacion);
}

void mostrarDato(struct remedio *remedioPunt)
{
    //cargar toda la informacion de la variable tipo struct remedio
    printf("\n------------DATOS REMEDIO---------------\n");
    printf("Nombre:");
    puts(remedioPunt->nombre);
    printf("Presentacion:");
    puts(remedioPunt->presentacion);
    printf("Laboratorio:");
    puts(remedioPunt->laboratorio);
    printf("Precio: %.2f \n", remedioPunt->precio);
    printf("Stock: %d \n", remedioPunt->stock);
    printf("Fecha de vencimiento (dd mm aaaa): %d/%d/%d \n", remedioPunt->vencimiento.dia, remedioPunt->vencimiento.mes, remedioPunt->vencimiento.anio);
    printf("Indicación: ");
    puts(remedioPunt->indicacion);
}

void modificarDatoPrecio(struct remedio *remedioPunt)
{
    if (remedioPunt->stock < 5)
    {
        remedioPunt->precio = remedioPunt->precio * 1.10;
    }else{
        remedioPunt->precio = remedioPunt->precio * 0.90;
    }
    
}

void cargarArreglo(struct remedio *arregloPunt, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("------------CARGAR REMEDIO %d -----------------\n", i+1);
		cargarDato(arregloPunt);
		arregloPunt++;
    }
    
}

void mostrarArreglo(struct remedio *arregloPunt, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        printf("\n------------MOSTRAR REMEDIO %d -----------------\n", i+1);
		mostrarDato(arregloPunt);
		// printf("\n----------------//\n");
		// fflush(stdin);
		arregloPunt++;
    }
}

void contarArregloPresentacion(struct remedio *arregloPunt, int cant, int *contarPunt)
{
    int contador = 0;
    //recorro el arreglo completo en busca de los remedios que cumplen con la condicion
    for (int i = 0; i < cant; i++)
    {
        //para cada posicion del arreglo analizo los datos en cuestion (tipo inyectable que son indicados para tratar el moquillo)
        if(strcmp(arregloPunt->presentacion, "inyectable") == 0 && strcmp(arregloPunt->indicacion,"moquillo")==0)
        {
            (*contarPunt)++;
        }
        arregloPunt++;
    }
    
}

void modificarArregloPrecio(struct remedio *arregloPunt, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        modificarDatoPrecio(arregloPunt);
		arregloPunt++;
    }
}



