#include "sort.h"

/**
 * selection_sort - Sorts an array in ascending order.
 *
 * @array: Array to be processed.
 * @size: Size of the input array.
 *
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	int smallest, temp;
	size_t i, j;

	if (array == NULL || size == 0)
		return;
	i = 0;
	while (i < size - 1)
	{
		temp = array[i];
		j = i + 1;
		while (j < size)
		{
			smallest = j;
			if (array[i] <= array[smallest])
				smallest = i;
			j++;
		}
		array[i] = array[smallest];
		array[smallest] = temp;
		print_array(array, size);

		i++;
	}
}
