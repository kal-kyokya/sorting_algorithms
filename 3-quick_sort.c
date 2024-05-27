#include "sort.h"

void _swap(int *a, int *b);

/**
 * quick_sort - Rearranges an array of integers.
 *
 * @array: The array to be processed.
 * @size: The size of the said array.
 *
 * Return : Nothing.
 */
void quick_sort(int *array, size_t size)
{
	size_t index;
	int pivot, pvt_idx;

	if (array == NULL || size < 2)
		return;

	pvt_idx = (int)size - 1;
	printf("pvt_idx: %i\n", pvt_idx);
	pivot = array[pvt_idx];
	index =  0;
	printf("pivot: %i\n", pivot);
	while (index < size)
	{
		if (pivot < array[index] && pvt_idx < (int)index)
			index++;
		else
		{
			_swap(&array[pvt_idx], &array[index]);
			pvt_idx = index;
			print_array(array, size);
			index++;
		}
	}
}


/**
 * _swap - Shifts the values of two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 *
 * Return: Nothing.
 */
void _swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
