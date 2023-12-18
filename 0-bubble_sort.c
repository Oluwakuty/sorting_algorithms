#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @b: The first integer to swap.
 * @c: The second integer to swap.
 */
void swap_ints(int *b, int *c)
{
	int tmp;

	tmp = *b;
	*b = *c;
	*c = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * Description: Prints the array after each swap.
 */

void bubble_sort(int *array, size_t size)
{
	size_t j, lent = size;
	bool bobble = false;

	if (array == NULL || size < 2)
		return;

	do {
		bobble = true;

		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap_ints(array + j, array + j + 1);
				print_array(array, size);
				bobble = false;
			}
		}
		lent--;
	} while (bobble == false);
}
