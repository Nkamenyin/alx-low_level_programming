#include "main.h"

/**
 * main - it multiplies two numbers
 *@argc: the arguargument count
 *@argv: array of argumarguments
 *Return: 0 (Succes), 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
