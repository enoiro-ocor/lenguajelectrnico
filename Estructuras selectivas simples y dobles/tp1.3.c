#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) // Función principal donde comienza la ejecución del programa
{
    int calif = 0; // Declara una variable entera 'calif' para almacenar la calificación e inicializa a 0

    printf("Ingresar calificacion "); // Imprime un mensaje solicitando al usuario que ingrese la calificación
    scanf("%d", &calif); // Lee la calificación ingresada por el usuario y la guarda en la variable 'calif'

    // Verifica si la calificación es mayor o igual a 7
    if (calif >= 7) 
    {
        printf("Aprobado"); // Si es verdadero, imprime "Aprobado"
    }
    else // Si la calificación es menor que 7
    {
        // Verifica si la calificación es mayor o igual a 4
        if (calif >= 4) 
        {
            printf("Desaprobado"); // Si es verdadero, imprime "Desaprobado"
        }
        else // Si la calificación es menor que 4
        {
            printf("Aplazado"); // Imprime "Aplazado"
        }
    }

    return 0; // Retorna 0 para indicar que la ejecución del programa fue exitosa
}
