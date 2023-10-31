#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Write a function that returns a
 * pointer to a 2 dimensional array of integers.
 * Return: A pointer to the allocated 2D array
 * --------------------------
 * Prototype: int **alloc_grid(int width, int height);
 * Each element of the grid should be initialized to 0
 * The function should return NULL on failure
 * If width or height is 0 or negative, return NULL
 * --------------------------
 * @theWidthOfGrid: The width of the grid
 * @theHeightOfGrid: The height of the grid
 * --------------------------
 * By Youssef Hassane
 */

int **alloc_grid(int theWidthOfGrid, int theHeightOfGrid)
{
	/* Pointer to a 2D array of integers */
	int **theGrid;
	/* Index variables for the 2D array */
	int index_1 = 0;
	int index_2 = 0;
	/* Check if the provided width or height is invalid (zero or negative) */
	if (theWidthOfGrid <= 0 || theHeightOfGrid <= 0)
		return (NULL);

	/* Allocate memory for the rows of the 2D array */
	theGrid = (int **)malloc(sizeof(int *) * theHeightOfGrid);

	/* Check if memory allocation failed */
	if (theGrid == NULL)
		return (NULL);

	/* Allocate memory for each column in each row and initialize elements to 0 */
	for (; index_1 < theHeightOfGrid; index_1++)
	{
		theGrid[index_1] = (int *)malloc(sizeof(int) * theWidthOfGrid);

		/* Check if memory allocation failed for this row */
		if (theGrid[index_1] == NULL)
		{
			/* Free all previously allocated memory to avoid memory leaks */
			for (index_2 = 0; index_2 < index_1; index_2++)
				free(theGrid[index_2]);
			free(theGrid);
			return (NULL);
		}

		/* Initialize elements to 0 in the current row */
		for (index_2 = 0; index_2 < theWidthOfGrid; index_2++)
			theGrid[index_1][index_2] = 0;
	}
	/* Return the pointer to the allocated and initialized 2D array */
	return (theGrid);
}
