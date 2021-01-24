#include <stdio.h>

int main(){
    int numberTyped = 0, counter = 1;

    printf("Ingrese un numero entero\n");
    scanf("%d", &numberTyped);
    
    while(numberTyped / 10 > 0){
        numberTyped = numberTyped / 10;
        counter++;
    }
    printf("La cantidad de cifras del numero ingresado es: %d", counter);
    return 0;
}