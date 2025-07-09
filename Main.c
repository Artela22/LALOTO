#include <stdio.h>
#include <stdlib.h>  // Para system("cls") en Windows
#include <conio.h>   // Para _getch() 
void mostrarMenu();
void ingresarGanadores();   
void ingresarBoletos();     
void mostrarResumen();      

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

// Funciones de prueba 
#include <stdio.h>

int Boletos_Ganadores() // funcion para  ingresar los boletos ganadores
{
    int B[6], C, Ve[6];
    for (C = 0; C < 6; C++)
    {
        B[C] = 0;
        Ve[C] = 0;
        printf("ingrese el numero ganador N* %i : ", C + 1);
        scanf("%i", &Ve[C]);
        if (Ve[C] >= 1 && Ve[C] <= 38) // entrara adentro solamente si el numero es mayor a 0, mayor o igual a 1 y menor o igual a 38
        {
            if (C == 0) // if para asegurar que estamos en la primera iteracion
                B[C] = Ve[C];
            else if (Ve[C] == B[C - 1])
            { // evaluamos el valor del boleto ganador en la anterior iteracion
                printf("error, numero igual al primer numero");
                return 1;
            }
            else                // si no es igual al anterior, se guarda
                B[C] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            if (C == 2)
            {
                if (Ve[C] == B[C - 1] || Ve[C] == B[C - 2]) // evaluamos el valor del boleto ganador en la primer y segunda iteraccion
                {
                    printf("error, numero igual al primer o segundo numero");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
            if (C == 3)
            {
                if (Ve[C] == B[C - 1] || Ve[C] == B[C - 2] || Ve[C] == B[C - 3]) // evaluamos el valor del boleto ganador en la primera, segunda iteraccion y tercera iteracion
                {
                    printf("error, numero igual al numero ganador 1, 2 o 3");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
            if (C == 4)
            {
                if (Ve[C] == B[C - 1] || Ve[C] == B[C - 2] || Ve[C] == B[C - 3] || Ve[C] == B[C - 4]) // evaluamos el valor del boleto ganador en las iteraciones 1, 2, 3 y 4
                {
                    printf("error, numero igual al numero ganador 1,2,3 o 4");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
            if (C == 5)
            {
                if (Ve[C] == B[C - 1] || Ve[C] == B[C - 2] || Ve[C] == B[C - 3] || Ve[C] == B[C - 4] || Ve[C] == B[C - 5]) // evaluamos el valor del boleto ganador en las iteraciones 1, 2, 3, 4 y 5
                {
                    printf("error, numero igual al numero ganador 1,2,3,4 o 5");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
            if (C == 6)
            {
                if (Ve[C] == B[C - 1] || Ve[C] == B[C - 2] || Ve[C] == B[C - 3] || Ve[C] == B[C - 4] || Ve[C] == B[C - 5] || Ve[C] == B[C - 6]) // evaluamos el valor del boleto ganador en las iteraciones 1, 2, 3, 4, 5 y 6
                {
                    printf("error, numero igual al numero ganador 1,2,3,4,5 o 6");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
        }
        else // se usa para cuando se escoge un valor negativo o es igual a 0, como por ejemplo -10
        {
            printf("valor negativo o 0");
            return 1; // Colocar error o repeticion? De momento lo dejare con error
        }
    }
    for (C = 0; C < 6; C++)
    {
        if (C == 0)
            printf("los numeros ganadores fueron establecidos a %02i-", B[C]);
        else if (C < 5)
            printf("%02i-", B[C]);
        else
            printf("%02i-", B[C]);
    }
    return 0; 
}
void ingresarBoletos() {
   
}

void mostrarResumen() {
   
}

 
