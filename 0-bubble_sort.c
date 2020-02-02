#include "sort.h"
/**
 * bubble_sort - sorting algorithm
 * @array: to be sorted
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t fir, sec = 0;

	for(fir = 1; fir < size; fir++)
	{
		for(sec = 0; sec < size - 1; sec++)
		{
			if(array[sec] > array[sec + 1])
			{
				swapper(&array[sec], &array[sec + 1]);
				print_array(array, size);
			}
		}
	}
}
