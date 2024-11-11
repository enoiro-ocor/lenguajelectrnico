#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) // Función principal del programa
{
    int conta = 0; // Declara una variable entera llamada 'conta' e inicializada a 0. Esta variable almacenará el límite del contador.
    int n = 0; // Declara una variable entera llamada 'n' e inicializada a 0. Esta variable actuará como contador.
    
    scanf("%d", &conta); // Lee un número entero ingresado por el usuario y lo almacena en la variable 'conta'.
    
    do // Inicia un ciclo do-while. El código dentro del bloque se ejecutará al menos una vez.
    {
        printf("%d ", n); // Imprime el valor actual de 'n' seguido de un espacio.
        n = n + 1; // Incrementa el valor de 'n' en 1.
    } while (n <= conta); // Continúa el ciclo mientras 'n' sea menor o igual a 'conta'.
    
    return 0; // Indica que el programa finalizó correctamente.
}
