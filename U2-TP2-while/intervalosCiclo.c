#include <stdio.h>

/*
Dados dos n�meros donde el primero y el �ltimo son l�mites de un intervalo, mostrar por pantalla los n�meros
comprendidos entre dicho intervalo. La operaci�n se realizar� una vez comprobado que los valores ingresados sean correctos.
En caso que los valores de los l�mites ingresados no sean adecuados, repetir la operaci�n de ingreso hasta que sean
adecuados
*/

int main(int argc, char *argv[]) {
	
	int intervaloI, intervaloS;
	bool condicion;
	
	condicion = intervaloI > intervaloS;
	
	while(condicion) {
		
		printf("Ingrese el Intervalo Inferior: ");
		scanf("%i", &intervaloI);
		
		printf("Ingrese el Intervalo Superior: ");
		scanf("%i", &intervaloS);
		
	}
	
	for(int i = intervaloI; i < intervaloS; i++) {
		printf("Los numeros que comprenden el intervalo son> ")
	}
	
	return 0;
}

