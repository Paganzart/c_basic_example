#include <stdio.h>

int main()
{
    int a, b, suma, resta, multiplicacion, division;

    printf("Ingrese a: ");
    scanf("%d", &a);
    printf("Ingrese b: ");
    scanf("%d", &b);

    suma = a + b;
    printf("El resultado es: %d\n", suma);

    resta = a - b;
    printf("El resultado de la resta es: %d\n");

    multiplicacion = a * b;
    printf("El resultado de la multiplicacion es: %d\n");

    division = a /b;
    printf("El resultado de la division es: %d\n");,
    return 0;
}
