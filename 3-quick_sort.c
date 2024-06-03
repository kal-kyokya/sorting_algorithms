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
}
