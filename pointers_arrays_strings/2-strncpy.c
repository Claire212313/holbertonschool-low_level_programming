#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to copy from src
 *
 * Description: copies up to n bytes from src to dest. If src is
 * shorter than n bytes, the remainder of dest is padded with null
 * bytes. If src is n bytes or longer, dest is not null-terminated
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
