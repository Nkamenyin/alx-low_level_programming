#include "main.h"

/**
 * create_array - it creates an array of chars,
 * and initializes it with a specific char
 *@size: size of memory
 *@c: character to asign
 *Return: pointer to array (success), NULL (fail)
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
