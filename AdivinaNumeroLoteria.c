#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_BOLAS 6
#define MAX_NUM 49

// Función para generar un número aleatorio único entre 1 y MAX_NUM


int main() {
    int numeros[NUM_BOLAS];
  printf("**Soy una super inteligencia artificial que te ayudara a adivinar el numero de la loteria**\n");
  printf("\n ***********(. ͡◭ ͜ʖ ͡◭.)***********\n");

    printf("\n EL GORDO DE NAVIDAD\n");
  

    // Inicializa el generador de números aleatorios
  int cont ;  
  int seed;//Semilla para inicializar el generador de números al azar
    seed=time(0);//Cargamos la semilla con el tiempo transcurrido
    srand(seed);

    printf("Los números que ganarán serán: ");
    for ( cont= 0; cont < NUM_BOLAS; cont++) {
        numeros[cont] = rand();
        printf("%d ", numeros[cont]);
    }
    printf("\n");
  printf("¡MUCHA SUERTE ENCONTRANDO ESTOS NUMEROS! \n ┏( ͡◭ ͜ʖ ͡◭)┛\n");

    return 0;
}