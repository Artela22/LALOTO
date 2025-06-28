#include <stdio.h>
#include <stdlib.h>  // Para system("cls") en Windows
#include <conio.h>   // Para _getch() si usas Windows

void mostrarMenu();
void ingresarGanadores();   // Placeholder
void ingresarBoletos();     // Placeholder
void mostrarResumen();      // Placeholder

int main() {
    int opcion;

    do {
        system("cls"); // Limpia pantalla (en Windows)
        mostrarMenu();
        printf("\nSeleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarGanadores();
                break;
            case 2:
                ingresarBoletos();
                break;
            case 3:
                mostrarResumen();
                break;
            case 4:
                printf("\nSaliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("\nOpción inválida. Intente de nuevo.\n");
                break;
        }

        if (opcion != 4) {
            printf("\nPresione cualquier tecla para continuar...");
            _getch(); // Espera que el usuario presione algo
        }

    } while (opcion != 4);

    return 0;
}

void mostrarMenu() {
    printf("=========== SIMULADOR DE LOTERIA ===========\n");
    printf("1. Ingresar los numeros ganadores\n");
    printf("2. Ingresar los boletos\n");
    printf("3. Mostrar resumen y resultados\n");
    printf("4. Salir\n");
    printf("============================================\n");
}

// Funciones de prueba (a completar por ti)
void ingresarGanadores() {
    printf("\n>> Esta función permitirá ingresar los números ganadores. (Futura implementación)");
}

void ingresarBoletos() {
    printf("\n>> Esta función permitirá ingresar los boletos. (Futura implementación)");
}

void mostrarResumen() {
    printf("\n>> Esta función mostrará el resumen de resultados. (Futura implementación)");
}

