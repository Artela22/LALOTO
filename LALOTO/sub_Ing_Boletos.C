#include <stdio.h>

int boleros_ganadores() // funcion para  ingresar los boletos (maximo 10)
{
    int B[6][10], C, C_B, Ve[6];//Boletos, Contador(para los 6 numeros del boleto), Contador de boletos, Verificacion
    for (C_B=0;C_B<10;C_B++)//matriz para llevar la cuenta de los boletos
    {
            printf("Boleto numero %i\n",C_B+1);
    for (C = 0; C < 6; C++)//matriz para los numeros de un boleto
    {
        B[C][C_B] = 0;
        Ve[C] = 0;
        if (C==0)
            printf("ingrese el primer numero: ");
        else if(C==1)
            printf("ingrese el segundo numero: ");
        else if (C==2)
            printf("ingrese el tercer numero: ");
        else if(C==3)
            printf("ingrese el cuarto numero: ");
        else if(C==4)
            printf("ingrese el quinto numero: ");
        else if(C==5)
            printf("ingrese el sexto numero: ");
        
        scanf("%i", &Ve[C]);
        if (Ve[C] >= 1 && Ve[C] <= 38) // entrara adentro solamente si el numero es mayor a 0, mayor o igual a 1 y menor o igual a 38
        {
            if (C == 0) // if para asegurar que estamos en la primera iteracion
                B[C][C_B] = Ve[C];
            else if (Ve[C] == B[C - 1][C_B])
            { // evaluamos el valor del boleto ganador en la anterior iteracion
                printf("error, numero igual al primer numero");
                return 1;
            }
            else                // si no es igual al anterior, se guarda
                B[C][C_B] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            if (C == 2)
            {
                if (Ve[C] == B[C - 1][C_B] || Ve[C] == B[C - 2][C_B]) // evaluamos el valor del boleto ganador en la primer y segunda iteraccion
                {
                    printf("error, numero igual al primer o segundo numero");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C][C_B] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
            if (C == 3)
            {
                if (Ve[C] == B[C - 1][C_B] || Ve[C] == B[C - 2][C_B] || Ve[C] == B[C - 3][C_B]) // evaluamos el valor del boleto ganador en la primera, segunda iteraccion y tercera iteracion
                {
                    printf("error, numero igual al numero ganador 1, 2 o 3");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C][C_B] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
            if (C == 4)
            {
                if (Ve[C] == B[C - 1][C_B] || Ve[C] == B[C - 2][C_B] || Ve[C] == B[C - 3][C_B] || Ve[C] == B[C - 4][C_B]) // evaluamos el valor del boleto ganador en las iteraciones 1, 2, 3 y 4
                {
                    printf("error, numero igual al numero ganador 1,2,3 o 4");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C][C_B] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
            if (C == 5)
            {
                if (Ve[C] == B[C - 1][C_B] || Ve[C] == B[C - 2][C_B] || Ve[C] == B[C - 3][C_B] || Ve[C] == B[C - 4][C_B] || Ve[C] == B[C - 5][C_B]) // evaluamos el valor del boleto ganador en las iteraciones 1, 2, 3, 4 y 5
                {
                    printf("error, numero igual al numero ganador 1,2,3,4 o 5");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C][C_B] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
            if (C == 6)
            {
                if (Ve[C] == B[C - 1][C_B] || Ve[C] == B[C - 2][C_B] || Ve[C] == B[C - 3][C_B] || Ve[C] == B[C - 4][C_B] || Ve[C] == B[C - 5][C_B] || Ve[C] == B[C - 6][C_B]) // evaluamos el valor del boleto ganador en las iteraciones 1, 2, 3, 4, 5 y 6
                {
                    printf("error, numero igual al numero ganador 1,2,3,4,5 o 6");
                    return 1;
                }
                else                // si no es igual al anterior, se guarda
                    B[C][C_B] = Ve[C]; // guardamos el valor nuevo en la iteracion anterior
            }
        }
        else // se usa para cuando se escoge un valor negativo o es igual a 0, como por ejemplo -10
        {
            printf("valor negativo o 0");
            return 1; // Colocar error o repeticion? De momento lo dejare con error
        }
    }
    }
    for (C_B=0;C_B<10;C_B++)//matriz para llevar la cuenta de los boletos
    {
        printf("boleto numero %i\n",C_B+1);
    for (C = 0; C < 6; C++)
    {
        if (C == 0)
            printf("los numeros ganadores fueron establecidos a %02i-", B[C][C_B]);
        else if (C < 5)
            printf("%02i-", B[C][C_B]);
        else
            printf("%02i\n", B[C][C_B]);
    }
}
    return 0;
}
