#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) // Función principal del programa
{
    float temperatura; // Declara una variable llamada 'temperatura' de tipo flotante para almacenar la temperatura

    printf("Ingrese la temperatura en grados Celsius: "); // Imprime un mensaje solicitando al usuario que ingrese la temperatura
    scanf("%f", &temperatura); // Lee la temperatura ingresada por el usuario y la almacena en la variable 'temperatura'

    // Verifica si la temperatura es válida (mayor o igual al cero absoluto)
    if (temperatura >= -273) 
    {
        // Si la temperatura es menor que 0 grados Celsius
        if (temperatura < 0) 
        {
            printf("El agua está en estado sólido"); // Imprime que el agua está en estado sólido
        } 
        // Si la temperatura está entre 0 y 100 grados Celsius
        else if (temperatura < 100) 
        {
            printf("El agua está en estado líquido"); // Imprime que el agua está en estado líquido
        } 
        // Si la temperatura es mayor o igual a 100 grados Celsius
        else 
        {
            printf("El agua está en estado gaseoso"); // Imprime que el agua está en estado gaseoso
        }
    } 
    // Si la temperatura es menor que el cero absoluto
    else 
    {
        printf("Error: Temperatura fuera de rango"); // Imprime un mensaje de error indicando que la temperatura está fuera de rango
    }

    return 0; // Retorna 0 para indicar que la ejecución del programa fue exitosa
}
