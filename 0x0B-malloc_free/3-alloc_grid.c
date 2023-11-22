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
	int **_new_height;
	int m = 0, p = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	_new_height = malloc(height * sizeof(int *));
	if (_new_height == NULL)
		return (NULL);
	for (m = 0; m < height; m++)
	{
		_new_height[m] = malloc(width * sizeof(int));
		if (_new_height[m] == NULL)
		{
			for (; m >= 0; m--)
			{
				free(_new_height[i]);
			}
			free(_new_height);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (p = 0; p < width; p++)
		{
			_new_height[m][p] = 0;
		}
	}
	return (_new_height);
}
