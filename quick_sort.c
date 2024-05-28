#include "sort.h"

void _swap(int *a, int *b);
int lomuto_partition(int *array, size_t pvt_idx, size_t size);
void helper(int *array, size_t index, size_t size);

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
	if (array == NULL || size < 2)
		return;

	helper(array, 0, size - 1);
}

/**
 * helper - Recursively partitions an array.
 *
 * @array: Subarray to be processed.
 * @left: Desired leftmost bound index in the array.
 * @right: Desired rightmost bound index in the array.
 *
 * Return: Nothing.
 */
void helper(int *array, size_t left, size_t right)
{
	int pivot;

	if (array == NULL || left >= right)
		return;
	pivot = lomuto_partition(array, left, right);
	helper(array, left, pivot - 1);
	helper(array, pivot + 1, right);
}

/**
 * lomuto_partition - Partitions an array.
 *
 * @array: Array to be partitioned.
 * @left: Desired leftmost bound index in the array.
 * @right: Desired rightmost bound index in the array.
 *
 * Return: New index of the pivot.
 */
int lomuto_partition(int *array, size_t left, size_t right)
{
	int *current, *pvt_ptr, *pivot;
	int index;

	if (array == NULL || left == right)
		return (-1);
	index = (int)right;
	pivot = &array[left];
	pvt_ptr = &array[right];;
	current = &array[right];
	while (current != pivot)
	{
		if (*current >= *pivot)
		{
			_swap(current, pvt_ptr);
			pvt_ptr -= 1;
			index -= 1;
			print_array(array, right);
		}

		current -= 1;
	}
	_swap(pivot, pvt_ptr);

	return (index);
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
