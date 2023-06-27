#include "sort.h"

/**
 * author-omidoyin
 * selection_sort - sorts an array following the selection sort algorithm "Done"
 * @array: array to sort
 * @size: size of the array;
 */

void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min;

	register int tmp;

	if (size < 2)
		return;

	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		tmp = array[i];
		array[i] = array[min];
		array[min] = tmp;
		if (i != min)
			print_array(array, size);
	}
}
