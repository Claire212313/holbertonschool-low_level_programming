#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value of the string
 */
int _atoi(char *s)
{
	int sign = 0;
	unsigned int result = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign++;
		if (*s >= '0' && *s <= '9')
			break;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + (*s - '0');
		s++;
	}
	if (sign % 2 == 1)
		return ((int)-result);
	return ((int)result);
}
