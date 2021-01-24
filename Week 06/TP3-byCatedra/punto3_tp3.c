//PUNTO 3 - frase convertida
#include <stdio.h>
#include <ctype.h>

void transformar();
int esVocal (char caracter);

int main(){
	
	transformar();
	return 0;
}

void transformar(){

	char caracter;

	printf("Ingrese una frase y al finalizar escriba un punto: \n ");
	caracter = getchar();

	while(caracter != '.'){
		//controlo si es minuscula
		if (esVocal(caracter) == 1) //si es vocal minuscula converti a mayuscula, si es vocal mayuscula no hace falta hacer nada
	        caracter = toupper(caracter);
        
		while(caracter != ' ' && caracter != '.'){
			putchar(caracter);
			caracter = getchar();
		}

		if(caracter != '.')
		{
			putchar(caracter);
			caracter = getchar();
		}
	} 

}


int esVocal (char caracter){
    switch (caracter)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': return 1;
        break;
        default: return 0;
        break;
    }
}