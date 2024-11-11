#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) { // Función principal del programa
    int numero; // Declara una variable entera llamada 'numero' para almacenar el número ingresado por el usuario

    printf("Ingrese un numero entre 1 y 12: "); // Imprime un mensaje en la consola pidiendo al usuario que ingrese un número entre 1 y 12
    scanf("%d", &numero); // Lee el número ingresado por el usuario y lo almacena en la variable 'numero'

    switch(numero) { // Inicia una estructura switch que evalúa el valor de 'numero'
        case 1: // Si 'numero' es igual a 1
            printf("Enero"); // Imprime "Enero" en la consola
            break; // Sale de la estructura switch
        case 2: // Si 'numero' es igual a 2
            printf("Febrero"); // Imprime "Febrero" en la consola
            break; // Sale de la estructura switch
        case 3: // Si 'numero' es igual a 3
            printf("Marzo"); // Imprime "Marzo" en la consola
            break; // Sale de la estructura switch
        case 4: // Si 'numero' es igual a 4
            printf("Abril"); // Imprime "Abril" en la consola
            break; // Sale de la estructura switch
        case 5: // Si 'numero' es igual a 5
            printf("Mayo"); // Imprime "Mayo" en la consola
            break; // Sale de la estructura switch
        case 6: // Si 'numero' es igual a 6
            printf("Junio"); // Imprime "Junio" en la consola
            break; // Sale de la estructura switch
        case 7: // Si 'numero' es igual a 7
            printf("Julio"); // Imprime "Julio" en la consola
            break; // Sale de la estructura switch
        case 8: // Si 'numero' es igual a 8
            printf("Agosto"); // Imprime "Agosto" en la consola
            break; // Sale de la estructura switch
        case 9: // Si 'numero' es igual a 9
            printf("Septiembre"); // Imprime "Septiembre" en la consola
            break; // Sale de la estructura switch
        case 10: // Si 'numero' es igual a 10
            printf("Octubre"); // Imprime "Octubre" en la consola
            break; // Sale de la estructura switch
        case 11: // Si 'numero' es igual a 11
            printf("Noviembre"); // Imprime "Noviembre" en la consola
            break; // Sale de la estructura switch
        case 12: // Si 'numero' es igual a 12
            printf("Diciembre"); // Imprime "Diciembre" en la consola
            break; // Sale de la estructura switch
        default: // Si 'numero' no coincide con ningún caso anterior
            printf("Error: Numero fuera de rango"); // Imprime un mensaje de error en la consola
            break; // Sale de la estructura switch
    }

    return 0; // Retorna 0 para indicar que la ejecución del programa fue exitosa
}
