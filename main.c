#include <stdio.h>
#include <string.h>

typedef struct {
    char nombre[50];
    int edad;
} Persona;

void intercambiar(Persona *arreglo, int posicion1, int posicion2)
{
    Persona temp = arreglo[posicion1];
    arreglo[posicion1] = arreglo[posicion2];
    arreglo[posicion2] = temp;
}

void ordenamientoBurbuja(Persona *arreglo, int tamano)
{
    int i, j;
    for (i = 0; i < tamano - 1; i++)
    {
        for (j = 0; j < tamano - i - 1; j++)
        {
            if (strcmp(arreglo[j].nombre, arreglo[j + 1].nombre) > 0)
            {
                intercambiar(arreglo, j, j + 1);
            }
        }
    }
}
void main(void){
	printf("Hola");
	printf("Buenas")

	return 0;
}