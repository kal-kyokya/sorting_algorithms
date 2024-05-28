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
	int pivot;
	int *pvt_ptr, *current;

	if (array == NULL || size < 2)
		return;
	pivot = array[0];
	current = &array[size - 1];
	pvt_ptr = &array[size - 1];
	while (current != &array[0])
	{
		if (*current > pivot)
		{
			_swap(current, pvt_ptr);
			pvt_ptr -= 1;
			print_array(array, size);
		}

		current -= 1;
	}
	_swap(&array[0], pvt_ptr);
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
