//EJERCICIO 2 - TP2

#include <stdio.h> 

int main( ){
    int hora, minutos, segundos, suma_segundos, error;
    
    do{
        printf("Ingrese Hora: \n");
        scanf("%d", &hora);
        printf("Ingrese Minutos: \n");
        scanf("%d", &minutos);
        printf("Ingrese Segundos: \n");
        scanf("%d", &segundos);

        if((hora>=0 && hora<=23)&&(minutos>=0 && minutos <=59)&&(segundos >=0 && segundos <=59)){
            //estan bien los datos
            error = 0;
        }else{
            error = 1;
            printf("*******ERROR: La hora es incorrecta******* \n");
        }

    }while(error == 1);

    suma_segundos = hora * 60 * 60 + minutos * 60 + segundos;
    printf("SU HORA EN SEGUNDOS ES => %d \n", suma_segundos);

    return 0;
}