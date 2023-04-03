#include <stdio.h>
#define PI 3.14159

int main() {

    double radio, perimetro;

    printf("Para conocer el perimetro de una circunferencia debes ingresar el radio del circulo: ");
    scanf("%lf", &radio);

    perimetro = 2*PI*radio;

    printf("\n");

    printf("\nEl perimetro de la circunferencia con el radio dado es: %lf", perimetro);

    return 0;
}