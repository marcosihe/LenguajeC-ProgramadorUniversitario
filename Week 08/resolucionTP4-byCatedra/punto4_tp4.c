//PUNTO 4 - TP4
#include<stdio.h>

void leerMazoEntero(int mazoIni[], int Tama);
void dividirMazo(int mazoIni[],int mazo1[],int mazo2[],int MitadTama);
void mezclarMazo(int mazoFinal[],int mazo1[],int mazo2[],int MitadTama);
void mostrarMazo(int mazoFinal[], int Tama);

int main(){
  int Tama=10, MitadTama=Tama/2;
  int mazoIni[Tama], mazo1[MitadTama], mazo2[MitadTama], mazoFinal[Tama];

  leerMazoEntero(mazoIni, Tama);
  dividirMazo(mazoIni, mazo1, mazo2, MitadTama);
  mezclarMazo(mazoFinal, mazo1, mazo2, MitadTama);
  mostrarMazo(mazoFinal, Tama);

  return 0;
}

void leerMazoEntero(int mazoIni[], int Tama)
{
	//cargo el mazo de cartas
	for(int i=0; i<Tama; i++){
		mazoIni[i] = i+1;
		printf("%d \t", mazoIni[i]);
	}
}

void dividirMazo(int mazoIni[],int mazo1[],int mazo2[],int MitadTama)
{
	int j=0;
	//El mazo original se divide en dos partes
	for(int i=0; i<MitadTama; i++){
		mazo1[i] = mazoIni[i];
	}
	for(int i= MitadTama; i<10; i++){
		mazo2[j] = mazoIni[i];
		j++;
	}
	
	//Muestro para corroborar como quedan las mitades
	// printf("\n");
	// for(int i=0; i<MitadTama; i++){
	// 	printf("%d \t", mazo1[i]);
	// }
	// printf("\n");
	// for(int i=0; i<MitadTama; i++){
	// 	printf("%d \t", mazo2[i]);
	// 	}
	// printf("\n");
	
}

void mezclarMazo(int mazoFinal[],int mazo1[],int mazo2[],int MitadTama)
{
	int j=0;
	for(int i=0;i<MitadTama;i++,j++){
		mazoFinal[j]=mazo1[i];
		mazoFinal[++j]=mazo2[i]; //++j Pre incremento (primero se incrementa el valor de j y luego se asigna en esa posición mazo2[i])
		//la linea anterior se puede reemplazar por
		// j++;
		// mazoFinal[j]=mazo2[i];
	}
}

void mostrarMazo(int mazoFinal[], int Tama)
{
	//Muestro el mazo final mezclado
	printf("\n Mazo Final \n");
	for(int i=0; i<Tama; i++){
		printf("%d \t", mazoFinal[i]);
	}
}
