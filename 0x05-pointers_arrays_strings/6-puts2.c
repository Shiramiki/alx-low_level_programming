#include "main.h"

/**
  * puts2 - prints every 2 characters
  * @str: input string
  *
  * Return: void
*/
void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[j])
	{
		j++;
	}
	while (i < j)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
