#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida.

int main(void) // Función principal del programa.
{
    int n = 0; // Declara e inicializa una variable 'n' para almacenar el número ingresado por el usuario.
    int z = 1; // Declara e inicializa una variable 'z' para almacenar el factorial calculado.
    int contan = 1; // Declara e inicializa una variable 'contan' como contador.

    scanf("%d", &n); // Lee el número ingresado por el usuario y lo almacena en 'n'.

    do // Inicia un ciclo do-while.
    {
        z = contan * z; // Calcula el factorial multiplicando 'contan' por 'z'.
        contan = contan + 1; // Incrementa el contador 'contan' en 1.
    } while (contan <= n); // Continúa el ciclo mientras 'contan' sea menor o igual a 'n'.

    printf("%d ", z); // Imprime el factorial calculado 'z'.
    return 0; // Indica que el programa finalizó correctamente.
}
