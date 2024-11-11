#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) // Función principal donde comienza la ejecución del programa
{
    int dia; // Declara una variable entera llamada 'dia' para almacenar el número del día

    printf("Ingrese un número de día (1-7): "); // Solicita al usuario que ingrese un número de día (1-7)
    scanf("%d", &dia); // Lee el número de día ingresado por el usuario y lo almacena en 'dia'

    switch (dia) // Inicia una estructura switch basada en el valor de 'dia'
    {
        case 1: // Si 'dia' es 1
            printf("Lunes"); // Imprime "Lunes"
            break; // Sale de la estructura switch
        case 2: // Si 'dia' es 2
            printf("Martes"); // Imprime "Martes"
            break; // Sale de la estructura switch
        case 3: // Si 'dia' es 3
            printf("Miércoles"); // Imprime "Miércoles"
            break; // Sale de la estructura switch
        case 4: // Si 'dia' es 4
            printf("Jueves"); // Imprime "Jueves"
            break; // Sale de la estructura switch
        case 5: // Si 'dia' es 5
            printf("Viernes"); // Imprime "Viernes"
            break; // Sale de la estructura switch
        case 6: // Si 'dia' es 6
            printf("Sábado"); // Imprime "Sábado"
            break; // Sale de la estructura switch
        case 7: // Si 'dia' es 7
            printf("Domingo"); // Imprime "Domingo"
            break; // Sale de la estructura switch
        default: // Si 'dia' no es ninguno de los casos anteriores
            printf("Advertencia: Número de día inválido"); // Imprime un mensaje de advertencia para un número de día inválido
            break; // Sale de la estructura switch
    }

    return 0; // Retorna 0 para indicar una ejecución exitosa del programa
}
