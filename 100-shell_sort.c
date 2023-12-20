#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @b: The first integer to swap.
 * @c: The second integer to swap.
 */
void swap_ints(int *b, int *c)
{
	int temp;

	temp = *b;
	*b = *c;
	*c = temp;
}

/**
 * shell_sort - Sort an array of integers in ascending
 *              order using the shell sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Uses the Knuth interval sequence.
 */
void shell_sort(int *array, size_t size)
{
	size_t pap, k, l;

	if (array == NULL || size < 2)
		return;

	for (pap = 1; pap < (size / 3);)
		pap = pap * 3 + 1;

	for (; pap >= 1; pap /= 3)
	{
		for (k = pap; k < size; k++)
		{
			l = k;
			while (l >= pap && array[j - pap] > array[j])
			{
				swap_ints(array + l, array + (l - pap));
				l -= pap;
			}
		}
		print_array(array, size);
	}
}
