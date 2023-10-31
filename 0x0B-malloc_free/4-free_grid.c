#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Write a function that frees a 2
 * dimensional grid previously created by your
 * alloc_grid function.
 * --------------------------
 * Prototype: void free_grid(int **grid, int height);
 * Note that we will compile with your alloc_grid.c
 * file. Make sure it compiles.
 * --------------------------
 * @theGrid: The 2D array to be freed
 * @theHeightOfGrid: The number of rows in the grid
 * --------------------------
 * By Youssef Hassane
 */

void free_grid(int **theGrid, int theHeightOfGrid)
{
	/* An index variable to iterate through the grid */
	int index = 0;
	/* Check if the grid pointer is already NULL */
	if (theGrid == NULL)
	{
		return;
	}
	for (; index < theHeightOfGrid; index++)
	{
		/* Check if the current row is not NULL */
		if (theGrid[index] != NULL)
		{
			/* Free the memory associated with the row */
			free(theGrid[index]);
		}
	}
	/* Free the memory associated with the grid itself. */
	free(theGrid);
}
