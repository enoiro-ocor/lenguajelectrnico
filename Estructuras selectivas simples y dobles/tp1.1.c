#include <stdio.h> // Incluye la biblioteca estándar de entrada/salida

int main(void) // Función principal donde comienza la ejecución del programa
{
  int E = 0; // Declara una variable entera 'E' para almacenar la edad e inicializa a 0
  printf("Ingresar edad de la persona: "); // Solicita al usuario que ingrese la edad de la persona
  scanf("%d", &E); // Lee la edad ingresada por el usuario y la guarda en la variable 'E'
  
  // Verifica si la edad es mayor o igual a 18
  if (E >= 18) 
  {
    printf("La persona es mayor de edad\n"); // Si es verdadero, imprime un mensaje indicando que la persona es mayor de edad
  } 
  else 
  {
    printf("La persona es menor de edad\n"); // Si es falso, imprime un mensaje indicando que la persona es menor de edad
  }
  
  return 0; // Retorna 0 para indicar que la ejecución del programa fue exitosa
}
