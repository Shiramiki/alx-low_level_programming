#include "main.h"

/**
  * puts_half - prints half of a string,
  * @str: string to print half of
  *
  * Return: void
*/
void puts_half(char *str)
{
	int len;

	len = 0;
	while (str[len])
	{
		len++;
	}

	if (len % 2 == 0)
	{
		len /= 2;
	}
	else
	{
		len = (len - 1) / 2;
		len++;
	}

	while (str[len])
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');
}
