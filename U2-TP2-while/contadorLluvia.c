#include <stdio.h>

// Se ingresa por teclado la cantidad de agua ca�da, en mil�metros d�a a d�a durante una semana. Se pide
// determinar el d�a de mayor lluvia, el de menor y el promedio

int main(int argc, char *argv[]) {
	
	int contadorDias = 0, diaDeMayorLuvia, diaDeMenorLuvia;
	float cantidadAgua, acumuladorLluvia, menor = 400, mayor = 0;
	
	while(contadorDias <= 6){
		contadorDias++;
		
		printf("Ingrese la cantidad de lluvia del dia %i en mil�metros: ", contadorDias);
		scanf("%f", &cantidadAgua);
		acumuladorLluvia += cantidadAgua;
	
		if (menor >  cantidadAgua) {
			menor = cantidadAgua;
			diaDeMenorLuvia = contadorDias;
		}
		
		if (mayor < cantidadAgua) {
			mayor = cantidadAgua;
			diaDeMayorLuvia = contadorDias;
		}
	}
	
	printf("El dia de mayor lluvia fue el dia %i\n", diaDeMayorLuvia);
	printf("El dia de mayor lluvia fue el dia %i\n", diaDeMenorLuvia);
	printf("La cantidad de lluvia promedio fue de: %.2f\n", acumuladorLluvia / 7);
	
	return 0;
}

