#include <stdio.h>

int checkDigits(int numberTyped);
int countingDigits(int numberTyped, int amountOfDig, int checkingDig);

int main(){
    int initialNumber = 1, finalNumber, count = 0, checkingDigit;
    printf("A continuacion debera indicar el rango, por ejemplo: desde 1 hasta 1536:\n");
    printf("Para indicar desde donde, ingrese un numero mayor o igual a 0: ");
    scanf("%d", &initialNumber);
    printf("\nPara indicar hasta donde, ingrese un numero mayor que el anterior: ");
    scanf("%d", &finalNumber);
    printf("\nIngrese el digito de control: ");
    scanf("%d", &checkingDigit);


    for (int i = initialNumber; i <= finalNumber; i++)
    {
        count += countingDigits(i, checkDigits(i), checkingDigit);
    }
    printf("La cantidad de veces que aparece el digito %d en la secuencia de numeros desde %d hasta %d es de: %d", checkingDigit,initialNumber,finalNumber,count);
    return 0;
}

int checkDigits(int numberTyped)
{
    int counter = 1;
    while(numberTyped / 10 > 0){
        numberTyped = numberTyped / 10;
        counter++;
    }
    return counter;
}

int countingDigits(int numberTyped, int amountOfDig, int checkingDig)
{
    int counter = 0;
    for (int i = 0; i < amountOfDig; i++){
        if (numberTyped % 10 == checkingDig){
            counter++;
        }
        numberTyped = numberTyped/10;
    }
    return counter;
}