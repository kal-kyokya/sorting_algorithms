#include "sort.h"

/**
 * main- Entry to program.
 *
 * Return: 0 if success.
 */
int main(void)
{
	int array[] = {9, 5, 1, 7, 3, 8, 2, 4, 6};
	size_t size;

	size = 9;
	print_array(array, size);
	printf("---------------\n");
	quick_sort(array, size);
	printf("---------------\n");
	print_array(array, size);
	printf("---------------\n");

	return (0);
}
