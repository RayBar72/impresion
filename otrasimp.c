#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * imprime_binary -  the unsigned int argument is converted to binary
 * @args: num.
 * Return: return the percent sing
 *
 */
int imprime_binary(va_list args)
{
int cuenta = 0;
int N[100]; /*cantidad arbitraria para empezar*/
unsigned int i = 0;
unsigned int num;

num = va_arg(args, unsigned int);
if (num < 2) /* ver con ray condicion menor que cero */
{
_putchar(num + 48);
cuenta = 1;
}
if (num >= 2)
{
	while (num > 0)/*el resto va a ser 0 o 1 ya que es div 2*/
	{
	N[i] = num % 2;
	i++;
	}
	while (i--)/*arrancamos en i para escribir del ultimo al primero*/
	{
	putchar(N[i] + 48);
	cuenta++;
	}
}
return (cuenta);
}
