#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/**
 * get_func - structure that returns an way to print
 * @x: variable to the function
 * Return: function
 */
int (*get_func(char x))(va_list)
{
	busca_char a[] = {
		{"c", imprime_c},
		{"s", imprime_s},
		{"%", imprime_porcent},
		{"d", imprime_d},
		{"i", imprime_i},
		{"b", imprime_binary},
		{NULL, NULL}
	};
	int i = 0;

	while (a[i].ident)
	{
		if (x == a[i].ident[0])
			return (a[i].f);
		i++;
	}
	return (NULL);
}
