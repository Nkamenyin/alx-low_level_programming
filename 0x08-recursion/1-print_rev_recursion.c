#include "main.h"

/**
 * _print_rev_recursion - it prints a string in reverse.
 *@s: string to be printed
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(s++);
		_putchar(*s);
	}
}
