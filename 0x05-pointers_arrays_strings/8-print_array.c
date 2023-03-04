#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n elements of an array of integers
  * @a: array
  * @n: number of elements
  *
  * Return: void
*/
void print_array(int *a, int n)
{
	int i, last_num;

	i = 0;
	last_num = n - 1;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != last_num)
		{
			printf(",");
			printf(" ");
		}
		i++;
	}
	printf("\n");
}
