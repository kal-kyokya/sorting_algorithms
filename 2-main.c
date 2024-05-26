#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array1[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	int array2[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	size_t n1 = sizeof(array1) / sizeof(array1[0]);
	size_t n2 = sizeof(array2) / sizeof(array2[0]);

	print_array(array1, n1);
	printf("\n");
	selection_sort(array1, n1);
	printf("\n");
	print_array(array1, n1);
	printf("-----------\n");

	print_array(array2, n2);
	printf("\n");
	selection_sort(array2, n2);
	printf("\n");
	print_array(array2, n2);
	printf("-----------\n");

	return (0);
}

