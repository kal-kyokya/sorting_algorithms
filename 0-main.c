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
	int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
	size_t n = sizeof(array) / sizeof(array[0]);
	int array2[] = {7, 13, 19, 48, 52, 71, 73, 86, 96, 99};
	size_t n2 = sizeof(array2) / sizeof(array2[0]);
	int array3[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
	size_t n3 = sizeof(array3) / sizeof(array3[0]);

	print_array(array, n);
	printf("\n");
	bubble_sort(array, n);
	printf("\n");
	print_array(array, n);
	printf("-----------\n");

	print_array(array2, n2);
	printf("\n");
	bubble_sort(array2, n2);
	printf("\n");
	print_array(array2, n2);
	printf("-----------\n");

	print_array(array3, n3);
	printf("\n");
	bubble_sort(array3, n3);
	printf("\n");
	print_array(array3, n3);

	return (0);
}

