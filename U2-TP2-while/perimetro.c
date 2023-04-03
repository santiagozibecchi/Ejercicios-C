#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int lado, perimetro;
	int contador = 0;
	int opt;
	
	while(opt == 1) {
		
		while(lado <= 0 && contador < 3) {
			
			printf("Ingrese un valor positivo: ");
			scanf("%i", &lado);
			
			contador++;
			
		}
		
		if (contador == 3) {
			printf("\nNumero de intentos alcanzados!");
		} else {
			perimetro = lado * 4;
			printf("\nEl perimetro de un cuadrado es: %i", perimetro);
		}
		
	}
	
	printf("Seleccione 1 para continuar: ");
	scanf("%i", &opt);
	
	return 0;
}

