#include <stdio.h>
#include <string.h>

typedef struct
{
    char nombre[50];
    int edad;
} Persona;

/**
 * Intercambia los elementos en las posiciones especificadas en el arreglo de estructuras de tipo Persona.
 *
 * @param arreglo puntero al arreglo de estructuras de tipo Persona
 * @param posicion1 la posición del primer elemento a intercambiar
 * @param posicion2 la posición del segundo elemento a intercambiar
 *
 * @return void
 *
 * @throws Ninguno
 */
void intercambiar(Persona *arreglo, int posicion1, int posicion2)
{
    Persona temp = arreglo[posicion1];
    arreglo[posicion1] = arreglo[posicion2];
    arreglo[posicion2] = temp;
}

/**
 * Ordena un arreglo de estructuras de tipo Persona en orden ascendente bas ndose en el campo 'nombre' utilizando el algoritmo de Ordenamiento Burbuja.
 *
 * @param arreglo puntero al arreglo de estructuras de tipo Persona a ordenar
 * @param tamano el número de elementos en el arreglo
 *
 * @return void
 */
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

/**
 * Mapea un valor de un rango a otro.
 *
 * @param x el valor a mapear
 * @param x1 el inicio del rango original
 * @param x2 el fin del rango original
 * @param y1 el inicio del rango objetivo
 * @param y2 el fin del rango objetivo
 *
 * @return el valor mapeado
 */
float map(float x, float x1, float x2, float y1, float y2)
{
    return (x - x2) * (y2 - y1) / (x2 - x1) + y2;
}

/**
 * Realiza interpolación lineal en un conjunto de puntos de datos para encontrar el valor de y correspondiente a un valor de x dado.
 *
 * @param x_val El valor de x que se va a interpolar.
 * @param x     Un arreglo de valores de x que representan los puntos de datos.
 * @param y     Un arreglo de valores de y que representan los puntos de datos.
 * @param tamano  El número de puntos de datos.
 *
 * @return El valor de y interpolado correspondiente al valor de x dado.
 */
float interpolate(float x_val, float *x, float *y, int tamano)
{
    if (x_val < x[0])
        return y[0];
    if (x_val > x[tamano - 1])
        return y[tamano - 1];

    for (int i = 1; i < tamano; i++)
    {
        if (x_val <= x[i])
        {
            float x_sup = x[i];
            float x_inf = x[i - 1];
            float y_sup = y[i];
            float y_inf = y[i - 1];
            return map(x_val, x_inf, x_sup, y_inf, y_sup);
        }
    }

    return y[0];
}

void main(void)
{
    printf("Hola\n");
    printf("Buenas\n");

    getchar();
}