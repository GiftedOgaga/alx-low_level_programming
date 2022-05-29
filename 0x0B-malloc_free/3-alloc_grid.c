#include <stdio.h>
#include "main.h"

/**
 * alloc_grid-A function that returns a pointer to a two dimensional array
 * @width:width of array
 * @height:height of array
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int array[width][heigt] = {0};

	array[width][height] = malloc(sizeof(int) * (width * height));
