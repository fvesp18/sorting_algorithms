#include "sort.h"
/**
 * selection_sort - sorts list in ascending order using selection sort
 * @array: list to be sorted
 * @size: size of list
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	int idx = 0;
	size_t fir, sec = 0;

	for(fir = 0; fir < size - 1; fir++)
	{
		idx = fir;
		for(sec = fir + 1; sec < size; sec++)
		{
			if(array[sec] < array[idx])
			{
				idx = sec;
			}
		}
		swapper(&array[idx], &array[fir]);
		print_array(array, size);
	}
}
