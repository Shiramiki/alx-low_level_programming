#include "main.h"

/**
  * rev_string - everses a string.
  * @s: string to reverse
  *
  * Return: void
*/
void rev_string(char *s)
{
	int len, i, temp;

	len = 0;
	while (s[len])
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	s[len] = '\0';
}
