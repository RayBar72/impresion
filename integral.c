#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 * FUNCIÓN EXPONENCIAL QUE AYUDA PARA "DECREMAR" LA INTEGRAL
 * Return: the exponential
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1));
	return (0);
}

/**
 * NO HACER CASO DE ESTA FUNCIÓN
 * _rev - Function that revers a string.
 * @s: string to be write inverse.
 *


void _rev(char *s)
{
	int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (j = count - 1; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
*/

/**
 * LA FUNCIÓN APARECE COMO MAIN PARA HACER PRUEBAS
 * 
 * 
 */

int main(void)
{

    int x = 523, y = 0, z = x, i = 0, l = 0; /* x sirve para probar */
    char *s;

    if (x < 10 && x > -10) /* count int */
        i = 0;
    
    while (z > 10 || z < -10)
   {
       z = z / 10;
       i++;
   }
   i = i + 1;
   l = i + 1;
   printf("%d\n", i);
    s = malloc(l); /*inic. string */
    if(!s)
        exit(1);

    if (x < 10 && x > -10) /* string en caso menor a 0 */
        s[0] = x + '0';
    printf("%s\n", s);
    z = x;
    i = 0;
    if(x >= 10 && x <= -10)
    {
        while (i < l) /* string en otro caso. PARECE QUE NO ESTÁ ENTRANDO O ALGO MÁS. AQUI CREO QUE TENGO EL PROBLEMA*/
        {
            s[i] = (z / _pow_recursion(10, i)) + '0';
            z = z % 10;
            i--;
        }
    }    
    printf("valor final: %s\n", s);
    return (0);
}
