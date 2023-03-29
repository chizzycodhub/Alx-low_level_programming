#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) before_main();
/**
 * before_main - prints a string before main function executes
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

