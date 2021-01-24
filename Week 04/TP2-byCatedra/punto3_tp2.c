//EJERCICIO 3 - TP2: ESCUELA RURAL

#include <stdio.h> 

int main( ){
    int  transporte, distancia, hijos, desocupado, n;

    printf("Ingrese la cantidad de alumnos que desea evaluar: \n");
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
    {
        printf("***********ALUMNO %d***************** \n", i);
        printf("Ingrese el transporte utilizado. 1: Omnibus, 2: Transporte Escolar, 3: A pie \n");
        scanf("%d", &transporte);
        switch (transporte)
        {
            case 1: printf("=> Le corresponde $1000 \n");
                break;
            case 2: printf("=> Le corresponde $500 \n");
                break;
            case 3: 
                    printf("Ingrese la distancia desde casa a la escuela \n");
                    scanf("%d", &distancia);
                    if(distancia>3){
                        printf("Ingrese 1: si los padres estan desocupados; 2: si no lo estan \n");
                        scanf("%d", &desocupado);
                        if(desocupado == 1){
                            printf("=> Recibe plan Estudiar por $5000 \n");
                        }else{
                            printf("Ingrese hijos en edad escolar: \n");
                            scanf("%d", &hijos);
                            if (hijos>3)
                                printf("=> Le corresponde $3000 \n");
                            else
                                printf("=> No le corresponde ayuda economica \n");
                        }
                    }else{
                        printf("=> No le corresponde ayuda economica \n");
                    }
                break;
        }
    }
  
    return 0;
}