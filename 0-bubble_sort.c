#include "sort.h"

/**
 * bubble_sort - Implementing a bubble sort algorithm
 * @array: Array to be sorted
 * @size: Size of the array to be sorted
 * Return: Returns nothing;
 */

void bubble_sort(int *array, size_t size)
{
	size_t j = 0, i = 0, temp = 0, flag = 0;

	for (i = 0; i < size; i++)
	{
		flag = 0;

		for (j = 0; j < size; j++)
		{
			if (array[i] < array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;

				flag = 1;
				print_array(array, size);
			}
		}
		if (flag == 0)
		{
			print_array(array, size);
			break;
		}
	}
}
