//PUNTO 4 - año bisiesto
#include <stdio.h>

int bisiesto(int anio); //declaracion

int main(){
	int anio, continuar=0, resultado;
    do
    {
        printf("Ingrese un año: \n ");
        scanf("%d", &anio);
        if(anio>=1000 && anio<=9999)
            continuar = 1;
    } while (continuar == 0);

    resultado = bisiesto(anio);
    if(resultado == 1)
        printf("El año %d es un año BISIESTO", anio);
    else
        printf("El año %d NO es un año BISIESTO", anio);
	
	return 0;
}

int bisiesto(int anio) //defincion
{
    if((anio%4==0 && anio%100!=0) || anio%400==0)
        return 1; //es bisiesto
    else
        return 0;    
}
