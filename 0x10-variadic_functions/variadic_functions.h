#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/**
 * file - variadic_functions.h
 * Description: Holds all the prototypes of all the function
 *              used in this project
 */

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#endif
