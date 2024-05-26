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
	int smallest, index, temp;
	size_t i, j;

	if (array == NULL || size == 0)
		return;
	i = 0;
	while (i < size - 1)
	{
		temp = array[i];
		smallest = array[i];
		index = i;
		j = i + 1;
		while (j < size)
		{
			if (smallest <= array[j])
				j++;
			else
			{
				smallest = array[j];
				index = j;
				j++;
			}
		}
		array[i] = smallest;
		array[index] = temp;
		print_array(array, size);

		i++;
	}
}
