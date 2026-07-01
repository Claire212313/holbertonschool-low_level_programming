#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to a string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n;
	int start;

	while (str[len] != '\0')
		len++;
	n = (len + 1) / 2;
	start = len - n;
	while (start < len)
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
