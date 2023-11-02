#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers
 *@width: imput parameter
 *@height: imput parameter
 * Return: pointer to 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **av;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	av = malloc(sizeof(int *) * height);

	if (av == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		av[x] = malloc(sizeof(int) * width);

		if (av[x] == NULL)
		{
			for (; x >= 0; x--)
				free(av[x]);

			free(av);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			av[x][y] = 0;
	}
	return (av);
}
