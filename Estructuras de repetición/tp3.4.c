#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) // Función principal del programa
{
    int conta;  // Declaración de una variable entera llamada 'conta' que actuará como contador.
    int desde;  // Declaración de una variable entera llamada 'desde' que almacenará el valor inicial del rango.
    int hasta;  // Declaración de una variable entera llamada 'hasta' que almacenará el valor final del rango.

    scanf("%d", &desde);  // Lee un número entero ingresado por el usuario y lo almacena en la variable 'desde'.
    scanf("%d", &hasta);  // Lee un número entero ingresado por el usuario y lo almacena en la variable 'hasta'.

    for (conta = desde; conta <= hasta; conta = conta + 1) // Ciclo for: se ejecuta mientras 'conta' sea menor o igual a 'hasta'
    {
        printf("%d ", conta); // Imprime el valor actual de 'conta' seguido de un espacio.
    }

    return 0; // Indica que el programa finalizó correctamente.
}
