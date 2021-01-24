//EJERCICIO 4 I - TP2
#include <stdio.h>

int main() {
	int total_vocales, cantidad_a, cantidad_e, cantidad_i, cantidad_o, cantidad_u;
	char caracter;
    cantidad_a = 0;
	cantidad_e = 0;
	cantidad_i = 0;
	cantidad_o = 0;
	cantidad_u = 0;
	printf("Ingrese una frase finalizada en un punto: \n");
	scanf("%c", &caracter);

	while(caracter != '.'){
		switch(caracter){
			case 'a':
            case 'A': cantidad_a ++;
			break; 
			case 'e':
            case 'E': cantidad_e ++;
			break; 
			case 'i':
            case 'I': cantidad_i ++;
			break;
			case 'o': 
            case 'O': cantidad_o ++;
			break;
			case 'u':
            case 'U': cantidad_u ++;
			break;
		}
		scanf("%c", &caracter);
	}
	
    total_vocales = cantidad_a + cantidad_e + cantidad_i + cantidad_o + cantidad_u;			
    //ESCRIBIR TODOS LOS CONTADORES
	printf("\nCantidad total de vocales en la frase => %d \n", total_vocales);
	printf("\nVocal 'A' => %d \n", cantidad_a);
	printf("\nVocal 'E' => %d \n", cantidad_e);
	printf("\nVocal 'I' => %d \n", cantidad_i);
	printf("\nVocal 'O' => %d \n", cantidad_o);
	printf("\nVocal 'U' => %d \n", cantidad_u);

	return 0;
}
