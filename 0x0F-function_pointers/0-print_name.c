#include "function_pointers.h"

/**
 * print_name- function that prints a name
 * @name: the name to print
 * @f: callback fun to print the name
 * Return: Noting
*/

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
