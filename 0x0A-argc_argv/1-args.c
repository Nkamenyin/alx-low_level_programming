#include "main.h"
/**
 * main - it prints the number of arguments passed into it
 *@argc: the argument count
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d", argc - 1);
	return (0);
}
