#include "sort.h"
/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array of numbers
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int row, column;

	for (row = 0; row < size - 1; row++)
	{
		for (column = 0; column < (size - row - 1); column++)
		{
			if (array[column] > array[column + 1])
			{
				int temp;

				temp = array[column];
				array[column] = array[column + 1];
				array[column + 1] = temp;

				print_array(array, size);
			}
		}
	}
}
