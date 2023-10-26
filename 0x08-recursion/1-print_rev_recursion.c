#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 *@s: input value
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_print_rev_recursion(++s);
	}
}
