#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * file - variadic_functions.h
 * Description: Holds all the prototypes of all the function
 *              used in this project
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);


#include <stdarg.h>




/**
 * struct printer - A  struct data type defining a printer
 * @symbol: A symbol representing a data type.
 * @print: A function pointer to a function that prints a data type
 *         corresponding to a symbol.
 */
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;


#include <stdio.h>
#include <stdlib.h>

#endif
