#include "main.h"

/**
 * **alloc_grid  - returns a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2d array
*/

int **alloc_grid(int width, int height)
{
	int **tab, a, e;
	tab = malloc(sizeof(*tab) * height);

	if (width <= 0 || height <= 0 || tab == 0)
	{
		return (NULL);
	}
	else
	{
		for (a = 0; a < height; a++)
		{
			tab[a] = malloc(sizeof(**tab) * width);
			if (tab[a] == 0)
			{
				/*Free everything if malloc fails*/
				while (a--)
					free(tab[a]);
				free(tab);
				return (NULL);
			}

			for (e = 0; e < width; e++)
				tab[a][e] = 0;
		}
	}

	return (tab);
}
