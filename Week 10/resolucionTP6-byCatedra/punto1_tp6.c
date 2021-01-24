/*
Ayude a Felipe creando una función que, para un cliente dado, reciba como datos la
cantidad de artículos por cada tipo de calzado que compre y el precio para cada uno. La
función debe retornar:
- El valor correspondiente a la compra de cada producto.
- El valor total de la compra.
- El valor correspondiente al descuento.
- El valor total de la compra (con el descuento) incluyendo el IVA.
Cree en forma dinámica los arreglos de cantidades, precio por unidad y precio total por producto.
*/
#include<stdio.h>
#include<stdlib.h>

void calcularCompra(int *cantArticulo,float *precioUnidad, float *precioArticulos, float *total,float *descuento, float *totalIva);
int tipos;

int main()
{
    int *p_cantArticulos;
    float *p_precioUnidad, *p_precioArticulos;
    float total =0, descuento=0, totalIva =0;
   
    do
    {
        puts("Por mayor debe comprar como minimo tres tipos distintos de calzado y 5 como maximo");
        puts("Ingrese la cantidad de articulos distintos que desea comprar");
        scanf("%d", &tipos);
    } while (tipos < 3 || tipos > 5);

    // CREO LOS ARREGLOS/PUNTEROS DE FORMA DINAMICA
    p_cantArticulos = malloc(tipos*sizeof(int));
    p_precioUnidad = malloc(tipos*sizeof(float));
    p_precioArticulos = malloc(tipos*sizeof(float));

    //cargo arreglos de cantidades y precio individual
    for (int i = 0; i < tipos; i++)
    {
        printf("----Calzado %d-----\n", i+1);
        printf("Ingrese la cantidad de articulos: ");
        scanf("%d", &p_cantArticulos[i]);
        printf("\nIngrese el precio por unidad: ");
        scanf("%f", &p_precioUnidad[i]);
    }

    //invocar a la funcion 
    calcularCompra(p_cantArticulos, p_precioUnidad, p_precioArticulos, &total, &descuento, &totalIva);

    //muestro los vectores para corroborar la carga
    // puts("cantidades de articulos");
    // for (int i = 0; i < tipos; i++)
    // {
    //     printf("%d ", *p_cantArticulos);
    //     p_cantArticulos++;
    // }
    // puts("Precio por unidad");
    // for (int i = 0; i < tipos; i++)
    // {
    //     printf("%.2f ", *p_precioUnidad);
    //     p_precioUnidad++;
    // }

    //muestro la salida solicitada
    puts("-----------------------------------------------------");
    puts("Precio total por cada producto");
    for (int i = 0; i < tipos; i++)
    {
        printf("%.2f ", p_precioArticulos[i]);
    }
    printf("\nValor total de la compra sin descuentos: %.2f \n", total);
    printf("Valor descuento: %.2f \n", descuento);
    printf("Valor total (con descuento) + IVA: %.2f \n", totalIva);

    //LIBERO MEMORIA DE LOS ARREGLOS
    free(p_precioArticulos); 
    free(p_precioUnidad);
    free(p_precioArticulos);
    return 0;
}

void calcularCompra(int *cantArticulo,float *precioUnidad, float *precioArticulos, float *total,float *descuento, float *totalIva)
{
    for (int i = 0; i < tipos; i++)
    {
        //calculo los datos pedidos 
        precioArticulos[i] = cantArticulo[i] * precioUnidad[i];
        *total = *total + precioArticulos[i];
    }
    //calculo el descuento 15%
    *descuento = (*total * 15)/100;
    //calculo valor con descuentos mas iva
    *totalIva = (*total - *descuento) * 1.21; 
}
