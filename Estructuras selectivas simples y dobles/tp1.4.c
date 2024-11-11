#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) // Función principal donde comienza la ejecución del programa
{
    int A = 0; // Declara una variable entera 'A' para almacenar el primer número e inicializa a 0
    int B = 0; // Declara una variable entera 'B' para almacenar el segundo número e inicializa a 0
    int C = 0; // Declara una variable entera 'C' para almacenar el tercer número e inicializa a 0

    printf("Ingresar primer numero "); // Solicita al usuario que ingrese el primer número
    scanf("%d", &A); // Lee el primer número ingresado por el usuario y lo guarda en 'A'

    printf("Ingresar segundo numero "); // Solicita al usuario que ingrese el segundo número
    scanf("%d", &B); // Lee el segundo número ingresado por el usuario y lo guarda en 'B'

    printf("Ingresar tercer numero "); // Solicita al usuario que ingrese el tercer número
    scanf("%d", &C); // Lee el tercer número ingresado por el usuario y lo guarda en 'C'

    // Verifica si los números están en orden ascendente (A < B < C)
    if (A < B && B < C) {
        printf("%d,%d,%d", A, B, C); // Si es verdadero, imprime los números en orden ascendente
    } else {
        // Si no están en orden ascendente, verifica otros posibles ordenamientos
        if (A < C && C < B) {
            printf("%d,%d,%d", A, C, B); // Imprime A, C, B si están en este orden
        } else {
            if (B < A && A < C) {
                printf("%d,%d,%d", B, A, C); // Imprime B, A, C si están en este orden
            } else {
                if (B < C && C < A) {
                    printf("%d,%d,%d", B, C, A); // Imprime B, C, A si están en este orden
                } else {
                    if (C < B && B < A) {
                        printf("%d,%d,%d", C, B, A); // Imprime C, B, A si están en este orden
                    } else {
                        if (C < A && A < B) {
                            printf("%d,%d,%d", C, A, B); // Imprime C, A, B si están en este orden
                        }
                    }
                }
            }
        }
    }

    return 0; // Retorna 0 para indicar que la ejecución del programa fue exitosa
}
