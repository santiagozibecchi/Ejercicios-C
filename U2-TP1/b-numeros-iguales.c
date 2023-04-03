/*
    Escribir un programa que permita introducir por teclado tres números enteros y responda cuantos
    números son iguales. Mostrar los valores por pantalla.
*/

#include <stdio.h>

int main() {

    int n1, n2, n3, contadorNIguales;
    
    printf("\nIngrese el primer numero entero: ");
    scanf("%i", &n1);
    printf("\nIngrese el segundo numero entero: ");
    scanf("%i", &n2);
    printf("\nIngrese el tercer numero entero: ");
    scanf("%i", &n3);

    contadorNIguales = 0;

    if (n1 == n2) {
        contadorNIguales++;
    };
    
    if (n1 == n3) {
        contadorNIguales++;
    };

    if (n2 == n3) {
        contadorNIguales++;
    };

    printf("\nHay %i numeros de los ingresados que son iguales", contadorNIguales);

    return 0;
}