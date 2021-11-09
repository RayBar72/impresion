#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 * rev_string - Function that change the order of a string.
 * @s: string to be write inverse.
 *Return: reverse string
 */

char *rev_string(char *s)
{
	int i, d, count = 0;
	char temporal;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0, d = count - 1; i <
		     (count / 2); i++, d--)
	{
		temporal = s[i];
		s[i] = s[d];
		s[d] = temporal;
	}

return (s);
}

/**
*imprime_binary - generate a binary
*@args: num to convert
*Return: number of characters.
*/

int imprime_binary(va_list args)
{
unsigned int j = 0, n;
int cuenta = 0;
char *s, *sfin;

n = va_arg(args, unsigned int);
while (n > 1)
{
	n /= 2;
	j++;
}
j = j + 1;
sfin = malloc(j + 1);
if (sfin == NULL)
	return (-1);

s = sfin = malloc(j + 1);
if (n == 0)
{
	s[0] = '0';
	s[1] = '\0';
	cuenta = 1;
}
while (n > 0)
{
	if (n % 2 == 0)
	{
		s[cuenta] = 0 + '0';
	}

	if (n % 2 == 1)
	{
		s[cuenta] = 1 + '0';
	}
	n /= 2;
	if (n == 0)
	{
		cuenta++;
		s[cuenta] = 1 + '0';
		break;
	}
cuenta++;
}
if (n != 0)
    s[cuenta] = '\0';
sfin = rev_string(s);
free(sfin);
return (cuenta);
}
