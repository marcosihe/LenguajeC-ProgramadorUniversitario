/*
a. Función Buscar: operación que le permite determinar si la cadena contiene un
determinado carácter. La función debe devolver un valor de verdad. Use el
siguiente prototipo: int buscar(char *cad, char c);
b. Función Insertar: permite insertar un carácter en una determinada posición de la
cadena. Use el siguiente prototipo: void insertar (char *cad, int pos, char c);
*/

#include <stdio.h>
#include <string.h>

int buscar(char *cad, char c);
void insertar (char *cad, int pos, char c);

int main(){

	char  cadena[100], caracter;
	int resultado, pos;

	printf("Ingrese una cadena: \n ");
	gets(cadena);

	printf("Ingrese el caracter a buscar: \n ");
	scanf("%c", &caracter);

	resultado = buscar(cadena, caracter);
	if(resultado == 1){
		printf("El caracter ingresado se encuentra en la cadena \n ");
	}else{
		printf("No se encontro el caracter en la cadena \n ");
	}

	//trabajo con la función b
	puts("-------------------------------------------------------------------");
	printf("Ingrese una posición de la cadena para insertar un caracter: ");
	scanf("%d", &pos);
	printf("Ingrese un caracter: ");
	fflush(stdin);//vaciar (limpiar) el buffer del teclado
	scanf("%c", &caracter);
	
	insertar(cadena, pos, caracter);
	puts(cadena);

	return 0;
}

int buscar(char *cad, char c){
	while(*cad != '\0'){
		if(*cad == c){
			return 1;
		}
		cad++;
	}
	return 0;
}

void insertar(char *cad, int pos, char c){
	if(pos>=0 && pos <= strlen(cad)){
		cad[pos-1] = c; //menos uno porque en una cadena iniciamos en 0
	}else{
		printf("La posicion no corresponde con la longitud de la cadena\n");
	}
}