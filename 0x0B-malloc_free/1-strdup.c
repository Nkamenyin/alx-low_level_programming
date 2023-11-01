#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly
 * allocated space in memory, contains copy of the string
 * given as a parameter.
 *@str: char given
 *Return: 0
 */
char *_strdup(char *str)
{
	char *abcd;
	int i, r = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	abcd = malloc(sizeof(char) * (i + 1));

	if (abcd == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		abcd[r] = str[r];

	return (abcd);
}
