#include "main.h"

/**
  * _strcat -  function that concatenates two strings
  * @dest: destination string
  * @src: source string
  *
  * Return: contcatenated string
*/
char *_strcat(char *dest, char *src)
{
	char *strcat = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (strcat);
}
