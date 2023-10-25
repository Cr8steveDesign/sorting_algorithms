#include "sort.h"
/**
 * bubble_sort - Implementing a bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array to be sorted
 * Return: Returns nothing;
 */

void bubble_sort(int *array, size_t size)
{
	size_t j = 0, i = 0, temp = 0, flag;

	(void)flag;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		/*flag = 0;*/

		for (j = 0; j < (size - 1 - i); j++)
		{

			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				/*flag = 1;*/

				print_array(array, size);
			}
		}
		/*
				if (flag == 0)
				{
					print_array(array, size);
					break;
				}
				*/
	}
}
