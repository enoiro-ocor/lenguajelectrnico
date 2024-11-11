#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) // Función principal del programa
{
    int contan = 0; // Declaración de una variable entera llamada 'contan' e inicializada a 0. Esta variable almacenará el límite del contador.
    int n = 0; // Declaración de una variable entera llamada 'n' e inicializada a 0. Esta variable actuará como contador.

    scanf("%d", &contan); // Lee un número entero ingresado por el usuario y lo almacena en la variable 'contan'.

    while (n <= contan) // Ciclo while: se ejecuta mientras 'n' sea menor o igual a 'contan'
    {
        printf("%d ", n); // Imprime el valor actual de 'n' seguido de un espacio.
        n = n + 1; // Incrementa el valor de 'n' en 1.
    }

    return 0; // Indica que el programa finalizó correctamente.
}
