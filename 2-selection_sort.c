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
 * selection_sort - Sort an array of integers in ascending order
 *                  using the selection sort algorithm.
 * @array: An array of integers.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
 */

void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i = 0, j;

	if (array == NULL || size < 2)
		return;

	while (i < size - 1)
	{
		min = array + i;
		j = i + 1;
		while (j < size)
		{
			if (array[j] < *min)
				min = array + j;
			j++;
		}

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
		i++;
	}
}

