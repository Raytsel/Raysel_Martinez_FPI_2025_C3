#include <stdio.h>
#include <stdlib.h>

    /* Estancia
    El programa, al recibir como dato la superficie de una estancia Expresada
    en Acres, la convierte a hectareas

    ECA: variable de tipo real */

    void main (void)
{
    float ECA;
    printf("Ingrese la Extension de la estancia: ");
    scanf("%f", &ECA);
    ECA = ECA * 4047 / 10000;
    printf("\nExtension de la Estancia en hectareas: %5.2f", ECA);
}
