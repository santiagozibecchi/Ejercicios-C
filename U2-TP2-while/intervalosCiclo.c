#include <stdio.h>

/*
Dados dos números donde el primero y el último son límites de un intervalo, mostrar por pantalla los números
comprendidos entre dicho intervalo. La operación se realizará una vez comprobado que los valores ingresados sean correctos.
En caso que los valores de los límites ingresados no sean adecuados, repetir la operación de ingreso hasta que sean
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

