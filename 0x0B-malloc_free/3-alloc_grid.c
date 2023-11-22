#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: the width
 * @height: the heigh
 *
 * Return:the pointer
 */

int **alloc_grid(int width, int height)
{
	int **gridout;
	int m, p;

	if (width < 1 || height < 1)
		return (NULL);

	gridout = malloc(height * sizeof(int *));
	if (gridout == NULL)
	{
		free(gridout);
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		gridout[m] = malloc(width * sizeof(int));
		if (gridout[m] == NULL)
		{
			for (m--; m >= 0; m--)
				free(gridout[m]);
			free(gridout);
			return (NULL);
		}
	}

	for (m = 0; m < height; m++)
		for (p = 0; p < width; p++)
			gridout[m][p] = 0;

	return (gridout);
}
