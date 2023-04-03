#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	
	float num1, num2, suma, resta, multiplicacion, division;
	int operacion;
	
	printf("\nSeleccione 1 para Sumar");
	printf("\nSeleccione 2 para Restar");
	printf("\nSeleccione 3 para Multiplicar");
	printf("\nSeleccione 4 para Dividir\n");
	
	printf("Ingrese el primer numero para realizar la operacion: \n");
	scanf("%f", &num1);
	printf("Ingrese el segundo numero para realizar la operacion: \n");
	scanf("%f", &num2);
	
	printf("Ingrese que tipo de operacion desea realizar: \n");
	scanf("%i", &operacion);
	
	switch(operacion){
		
		case 1: 
			suma = num1 + num2;
			printf("La suma es igual a %fl", suma);
			break;
		case 2:
			resta = num1 - num2;
			printf("La resta es igual a %.2f", resta);
			break;
		case 3:
			multiplicacion = num1 * num2;
			printf("La multiplicacion es igual a %.2f", multiplicacion);
			break;
		case 4:
			if (num2 == 0) {
				printf("El divisor no puede ser igual cero");
			} else {
				division = num1 / num2;
				printf("La division es igual a %.2f", division);
			};
			break;
			
		default:
			printf("ERROR");
			break;		
	}
	
	getch();
	return 0;
}

