#include <stdio.h>

int checkDigits(int numberTyped);
int countingDigits(int numberTyped, int amountOfDig, int checkingDig);

int main(){
    int numTyped, checkingDigit;

    printf("Ingrese el dígito de control: ");
    scanf("%d", &checkingDigit);
    printf("Ingrese un número mayor que 0: ");
    scanf("%d", &numTyped);
    
    printf("El digito de control aparece %d veces en el numero ingresado", countingDigits(numTyped, checkDigits(numTyped), checkingDigit));

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