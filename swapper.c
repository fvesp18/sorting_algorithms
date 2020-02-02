#include "sort.h"
/**
 * swapper - swaps two nodes
 * @x: left node
 * @y: right node
 * Return: N/A
 */
void swapper(int *x, int *y)
{
	int temp;

	if (x == y)
		return;

	temp = *x;
	*x = *y;
	*y = temp;
}
