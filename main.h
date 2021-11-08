#ifndef MAIN_H
#define MAIN_H

#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
/**
 * struct busca - struct thar searches for the right format
 * @ident: identifies the character
 * @f: the functions associated
 */

typedef struct busca
{
	char *ident;
	int (*f)(va_list);
} busca_char;
int _printf(const char *format, ...);
int imprime_c(va_list args);
int imprime_s(va_list args);
int imprime_d(va_list args);
int imprime_i(va_list args);
int _putchar(char c);
int imprime_porcent(va_list args);
int (*get_func(char x))(va_list args);
char *str_concat(char *s1, char *s2);
int _strlen_recursion(char *s);
int _strcmp(char *s1, char *s2);
int imprime_binary(va_list args);

#endif /*MAIN_H*/
