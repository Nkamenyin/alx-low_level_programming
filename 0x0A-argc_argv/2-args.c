#include "main.h"
/**
 * main - it prints all the arguments it receives
 *@argc: the argument count
 *@argv: array of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
