#include "sort.h"

void _swap(int *a, int *b);

/**
 * bubble_sort - Bubble sorts an integer array. 
 * @array: Collection of integers to be sorted.
 * @size: Size of the array parameter.
 *
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size)
{
	bool swap_flag;
	size_t sequence, i, j;

	sequence = size;
	do
	{
		i = 0;
		j = 1;
		swap_flag = false;
		while (i < sequence - 1)
		{
			if (array[i] > array[j])
			{
				_swap(&array[i], &array[j]);
				swap_flag = true;
				print_array(array, size);
			}
			i++;
			j++;
		}
		sequence--;
	}
	while (swap_flag);
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
