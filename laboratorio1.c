/* Ebandry Calderon Araya B81372
Jose Montoya HernÃ¡ndez C05066

El siguiente codigo es un programa encargado de imprimir piramides.
El programa le va a solicitar al usuario el tipo de caracter que forma 
la piramide, el tamanno de la base y por ultimo, solicita que tipo de 
piramide, normal o invertida. Ademas, cuando se imprime lo solicitado
el usuario puede elegir si SALIR del programa o continuar imprimiendo
piramides. */

#include <stdio.h>
#include <string.h>


void piramide() {
    // Bucle para la condicion SALIR
    int SALIR = 0;
    while (SALIR == 0) {

        // Solicitud de informacion al usuario
        char caracter1[2];
        printf("- Informacion sobre la piramide: \n");
        printf("Digite el caracter formara la piramide: ");
        scanf("%1s", caracter1);

        int base1;
        printf("Digite el tamaÃ±o de la base de la piramide: ");
        scanf("%d", &base1);

        int figura1;
        printf("Digite el tipo de piramide que desea, <1> para una piramide normal y <2> para una piramide invertida: ");
        scanf("%d", &figura1);

        // Condicion si figura1 es igual a 1 piramide normal, si es otro invertida
        if (figura1 == 1) {
            // Condicion para hacer la piramide normal
            for (int x = 1; x <= base1; x += 2) {
                for (int i = 0; i < x; i++) {
                    printf("%s", caracter1);
                }
                printf("\n");
            }
        }

        else {
            // Condicion para hacer la piramide invertida
            for (int y = base1 - 1; y > 0; y-= 2) {
                for (int i = 0; i < y; i++) {
                    printf("%s", caracter1);
                }
                printf("\n");
            }
        }

        // Si se digita SALIR termina el programa, otra cosa continua de nuevo con las piramides
        char decision1[5];
        printf("Digite SALIR para terminar el programa, cualquier otra cosa para continuar...\n");
        scanf("%s", decision1);
        if (strcmp(decision1, "SALIR") == 0) {
            SALIR = 1;
        }

    }
}

// Funcion piramide()
int main() {
    piramide();
    return 0;
}
