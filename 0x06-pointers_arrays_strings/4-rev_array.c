#include "main.h"
#include <stdio.h>

/**
  * reverse_array - reverses the content of an array of integers.
  * @a: array to reverse
  * @n: number of elements
  *
  * Return: reversed array;
*/
void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;

	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
