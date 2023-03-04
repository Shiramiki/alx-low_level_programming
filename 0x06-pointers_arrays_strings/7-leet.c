#include "main.h"

/**
  * leet -  encodes a string into 1337.
  * @str: string to encode
  *
  * Return: encoded string
*/
char *leet(char *str)
{
	int i, j;
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	int encoding[] = {52, 51, 48, 55, 49};


	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (str[i] == lower[j] || str[i] == upper[j])
			{
				str[i] = encoding[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
