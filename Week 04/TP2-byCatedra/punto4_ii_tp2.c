//EJERCICIO 4 II - OPCION 1
/*
#include <stdio.h>

int main() {
	int cantidad_a, cantidad_e, cantidad_i, cantidad_o, cantidad_u, vocales_distintas, palabras;
	char caracter;

	palabras = 0, 
	cantidad_a = 0,
	cantidad_e = 0,
	cantidad_i = 0,
	cantidad_o = 0,
	cantidad_u = 0,
	vocales_distintas = 0;

	printf("Ingrese una frase finalizada en un punto: \n");

	scanf("%c", &caracter);
	while(caracter != '.'){
		if(caracter != 32){  //32 en codigo ascii es el espacio vacio 
			switch(caracter){
				case 'a': cantidad_a = cantidad_a + 1;
				break;
				case 'e': cantidad_e = cantidad_e + 1;
				break; 
				case 'i': cantidad_i = cantidad_i + 1;
				break;
				case 'o': cantidad_o = cantidad_o + 1;
				break;
				case 'u': cantidad_u = cantidad_u + 1;
				break;
			}
			printf("%c", caracter);

		}else{
			printf("*");
			//analizar los contadores
			if(cantidad_a > 0)
			{ 	vocales_distintas = vocales_distintas + 1;}
			if(cantidad_e > 0)
			{ 	vocales_distintas ++;}
			if(cantidad_i > 0)
			{ 	vocales_distintas ++;}
			if(cantidad_o > 0)
			{ 	vocales_distintas ++;}
			if(cantidad_u > 0)
			{ 	vocales_distintas ++;}
			//controlar cuántas vocales distintas hubo en la palabra
			if(vocales_distintas >= 3){
				palabras ++;
			}
			//inicializar contadores en 0 para la proxima vuelta
			cantidad_a = 0,
			cantidad_e = 0,
			cantidad_i = 0,
			cantidad_o = 0,
			cantidad_u = 0,
			vocales_distintas = 0;
		}
		//leer el proximo caracter
		scanf("%c", &caracter);
	}
	//si la ultima palabra antes del punto cumple con la condicion los contadores de vocales quedaron cargados 
	//analizar los contadores 
	if(cantidad_a > 0)
		vocales_distintas ++;
	if(cantidad_e > 0)
		vocales_distintas ++;
	if(cantidad_i > 0)
		vocales_distintas ++;
	if(cantidad_o > 0)
		vocales_distintas ++;
	if(cantidad_u > 0)
		vocales_distintas ++;
	//controlar cuántas vocales distintas hubo en la palabra
	if(vocales_distintas >= 3)
		palabras ++;
				
	//ESCRIBIR EL VALOR DE LA VARIABLE PALABRAS
	printf("\nLa cantidad de palabras que cumplen con la condicion son => %d", palabras);

	return 0;
}
*/

//--------------------------------------------------------------------------------------------------
//EJERCICIO 4 II - OPCION 2

#include <stdio.h>

int main() {
	int cantidad_a, cantidad_e, cantidad_i, cantidad_o, cantidad_u, vocales_distintas, palabras;
	char caracter;

	palabras = 0, 
	printf("Ingrese una frase finalizada en un punto: \n");
	scanf("%c", &caracter);

	while(caracter != '.'){
		cantidad_a = 0;
		cantidad_e = 0;
		cantidad_i = 0;
		cantidad_o = 0;
		cantidad_u = 0;
		vocales_distintas = 0;
		
		//con este while interno la idea es recorrer cada palabra
		while(caracter != 32 && caracter != '.'){  //32 en codigo ascii es el espacio vacio 
			switch(caracter){
				case 'a': cantidad_a ++;
				break; 
				case 'e': cantidad_e ++;
				break; 
				case 'i': cantidad_i ++;
				break;
				case 'o': cantidad_o ++;
				break;
				case 'u': cantidad_u ++;
				break;
			}
			printf("%c", caracter);
			scanf("%c", &caracter);
		}
		//analizar los contadores (salió del while por ser espacio o punto)
		if(cantidad_a > 0)
			vocales_distintas ++;
		if(cantidad_e > 0)
			vocales_distintas ++;
		if(cantidad_i > 0)
			vocales_distintas ++;
		if(cantidad_o > 0)
			vocales_distintas ++;
		if(cantidad_u > 0)
			vocales_distintas ++;
		//controlar cuántas vocales distintas hubo en la palabra
		if(vocales_distintas >= 3)
			palabras ++;
		
		//controlar si puedo escribir el último carácter leído y si puedo leer el próximo
		if(caracter == 32){
			//salio del while por ser espacio vacio (completó una palabra)
			printf("*");
			scanf("%c", &caracter);
		}
		
	}
				
	//ESCRIBIR EL VALOR DE LA VARIABLE PALABRAS
	printf("\nLa cantidad de palabras que cumplen con la condicion son => %d", palabras);

	return 0;
}

