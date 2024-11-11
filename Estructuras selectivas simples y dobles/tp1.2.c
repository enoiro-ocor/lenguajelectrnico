#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) // Función principal donde comienza la ejecución del programa
{
    int N1 = 0; // Declara una variable entera 'N1' para almacenar el dividendo e inicializarla a 0
    int N2 = 0; // Declara una variable entera 'N2' para almacenar el divisor e inicializarla a 0
    int Res = 0; // Declara una variable entera 'Res' para almacenar el resultado e inicializarla a 0

    printf("Ingresar dividendo "); // Solicita al usuario que ingrese el dividendo
    scanf("%d", &N1); // Lee el dividendo ingresado por el usuario y lo guarda en 'N1'

    printf("Ingresar divisor "); // Solicita al usuario que ingrese el divisor
    scanf("%d", &N2); // Lee el divisor ingresado por el usuario y lo guarda en 'N2'

    // Verifica si el divisor es cero
    if (N2 == 0) {
        printf("Los datos ingresados no son válidos"); // Si el divisor es cero, muestra un mensaje de error
    } else {
        Res = N1 / N2; // Si el divisor no es cero, calcula la división y guarda el resultado en 'Res'
        printf("El resultado es %d", Res); // Muestra el resultado
    }

    return 0; // Retorna 0 para indicar que la ejecución del programa fue exitosa
}
