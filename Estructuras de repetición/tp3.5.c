#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int contra; // Declara una variable entera llamada 'contra' para almacenar la contraseña

int main() // Función principal del programa
{
    while (contra != 7434) // Ciclo while: se ejecuta mientras 'contra' sea diferente de 7434
    {
        printf("Ingrese la contraseña:\n"); // Imprime un mensaje solicitando la contraseña
        scanf("%d", &contra); // Lee la contraseña ingresada por el usuario y la almacena en 'contra'

        if (contra != 7434) // Condicional if: se ejecuta si 'contra' es diferente de 7434
        {
            printf("La contraseña ingresada es incorrecta.\n"); // Imprime un mensaje de error
        }
        else // Se ejecuta si 'contra' es igual a 7434
        {
            printf("lorem ipsum"); // Imprime "lorem ipsum" si la contraseña es correcta
        }
    }

    return 0; // Indica que el programa finalizó correctamente
}
