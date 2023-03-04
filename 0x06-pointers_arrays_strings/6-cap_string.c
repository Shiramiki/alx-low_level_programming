#include "main.h"

/**
  * cap_string - capitalizes all words of a string after separator
  * @str: string
  *
  * Return: capitalized character
*/
char *cap_string(char *str)
{
	char sep[] = {' ', '\t', '\n', ',', ',', ';', '.',
		'!', '?', '"', '(', ')', '{', '}'};
	int i, j;

	i = 0;

	if (str[i] >= 98 && str[i] <= 122)
	{
		str[i] = str[i] - 32;
	}
	while (str[i])
	{
		j = 0;
		while (j < 11)
		{
			if (str[i] != sep[j] && str[i - 1] == sep[j])
			{
				if (str[i] >= 98 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
			}
			j++;
		}
		i++;
	}
	return (str);
}
