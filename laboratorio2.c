/* Ebandry Calderon Araya B81372
Jose Montoya Hernández C05066

El siguiente codigo se encarga de recibir dos numeros
enteros positivos e indicar su maximo comun multiplo
mediante el algoritmo de Euclides.
EL codigo ademas indica mediante un mensaje en terminal
los distintos errores que pueden darse con los parametros
ingresados, tales como: numero incorrecto de parametros
ingresedos, valores negativos y el caso especial del
mcd de 0 y 0. */

#include <stdio.h>
#include <stdlib.h>

// Se encarga de obtener el MCD mediante el algoritmo de Euclides.
int calculador(int numero1, int numero2){
    // Operador modulo.
    int residuo = numero1 % numero2;
    // Si el residuo es cero, el MCD es el denominador.
    if (residuo == 0){
        return numero2;
    }
    /* Si no, reemplaza el numerador por el denominador y el
    denominador por el residuo. */
    else {
        calculador(numero2, residuo);
        }
    } 

int main(int argc, char *argv[]){
    // Verifica si el numero de parametros ingresados es correcto.
    if (argc != 3){
        printf(
            "El numero de argumentos ingresados deben ser 2, para que el programa funcione correctamente.\n"
        );
    }
    else {
    // Utiliza "atoi" para realizar el casting de caracteres a enteros.
    int numero1 = atoi(argv[1]);
    int numero2 = atoi(argv[2]);
    // Verifica si los numeros efectivamente son positivos.
    if (numero1 < 0 || numero2 < 0)
    {
        printf(
            "Los numeros ingresados deben ser enteros positivos.\n"
        );
    }
    // Comprueba el caso especial del MCD de 0 y 0.
    else if (numero1 == 0 && numero2 == 0){
        printf(
            "Ambos numeros no pueden ser igual a cero.\n"
        );
    }
    else {
        // Caso especial: uno de los numeros es ceros.
        if (numero1 == 0)
        {
            printf("El maximo comun divisor de %d y %d es %d\n", 
            numero1, numero2, numero2);
        }
        // Caso especial: uno de los numeros es ceros.
        else if (numero2 == 0){
            printf("El maximo comun divisor de %d y %d es %d\n", 
            numero1, numero2, numero1);
        }
        // Llama a "calculador()"
        else  {
            int mcd = calculador(numero1, numero2);
            printf(
            "El maximo comun divisor de %d y %d es %d\n",
            numero1, numero2, mcd
        );
        }
    }
    return 0;
    }
}
