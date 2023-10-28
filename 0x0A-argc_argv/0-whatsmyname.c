#include "main.h"

/**
 * main - program prints its name, followed by a new line.
 *@argc: the number of argument
 *@argv: the array of argument
 *Return: 0
 */
int main(int argc __attribute__((unused)),char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
