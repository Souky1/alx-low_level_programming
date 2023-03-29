#include"main.h"

/**
 * _strcat -concatenates two strings
 * @dest: destination
 * @src: source
 * Return: the pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int x = 0, y;

	while (dest[x])
	{
		x++;
	}
	for (y = 0; src[y]; y++)
	{
		dest[x++] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
