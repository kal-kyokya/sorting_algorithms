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
	int index, temp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	i = 0;
	while (i < size - 1)
	{
		temp = array[i];
		index = i;

		j = i + 1;
		while (j < size)
		{
			if (array[j] < array[index])
				index = j;
			j++;
		}
		array[i] = array[index];
		array[index] = temp;
		print_array(array, size);

		i++;
	}
}
