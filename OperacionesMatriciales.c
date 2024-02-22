#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int **matriz;
    int filas, columnas;
  int seed;
  int cont, cont2;

    // Solicitar al usuario el tamaño de la matriz
    printf("Ingrese el número de filas: ");
    scanf("%d", &filas);
    printf("Ingrese el número de columnas: ");
    scanf("%d", &columnas);

    // Asignar memoria dinámica para las filas de la matriz
    matriz = (int **)malloc(filas * sizeof(int *));
    

    // Asignar memoria dinámica para cada columna de la matriz
    for (int cont = 0; cont < filas; cont++) {
        matriz[cont] = (int *)malloc(columnas * sizeof(int));
        
    }

    // Inicializar el generador de números aleatorios
    seed=time (0);//Cargamos la semilla con el tiempo transcurrido
      srand(seed);//Inicializamos el generador de números;
  

    // Llenar la matriz con números aleatorios
    printf("Matriz generada:\n");
    for (int cont = 0; cont < filas; cont++) {
        for (int cont2 = 0; cont2 < columnas; cont2++) {
            matriz[cont][cont2] = rand() % 4; // Números aleatorios entre 0 y 99
            printf("%d ", matriz[ cont][cont2]);
        }
        printf("\n");
    }

    // Calcular la suma de todos los elementos de la matriz
    int suma = 0;
    for (int cont = 0; cont < filas; cont++) {
        for (int cont2 = 0; cont2 < columnas; cont2++) {
            suma += matriz[cont][cont2];
        }
    }

    // Imprimir la suma de todos los elementos de la matriz
    printf("La suma de todos los elementos de la matriz es: %d\n", suma);

    
    for(cont=0;cont<columnas;cont++){
      printf("\n");
      for(cont=0;cont<columnas;cont++){
        printf(" %c",matriz[cont][cont2]);

      }
       }
  
    // Calcular y imprimir la matriz traspuesta
printf("Matriz traspuesta:\n");
for (int cont = 0; cont < filas; cont++) {
    for (int cont2 = 0; cont2 < columnas; cont2++) {
        printf("%d ", matriz[cont][cont2]);
    }
    printf("\n");
}

  
    return 0;
}