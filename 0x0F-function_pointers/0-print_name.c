#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: the string name
 * @e: the printing function pointer
 *
 * Return: void
*/
void print_name(char *name, void (*e)(char *))
{
	if (name && e)
		e(name);
}
