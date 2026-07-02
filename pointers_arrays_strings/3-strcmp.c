#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Description: compares s1 and s2 character by character. As soon
 * as a difference is found, the difference between the two byte
 * values is returned
 *
 * Return: 0 if s1 and s2 are identical, a positive value if s1 is
 * greater than s2, or a negative value if s1 is less than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (s1[i] - s2[i]);
}
