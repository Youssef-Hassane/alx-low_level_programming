#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stdio.h>
#include <math.h>

int linear_search(int *arr, size_t n, int target);
int binary_search(int *arr, size_t size, int target);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int target);

int exponential_search(int *arr, size_t arrSize, int target);


#endif
