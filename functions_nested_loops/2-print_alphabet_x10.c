#include "main.h"
/**
* void print_alphabet_x10(void) -Write a function
*that prints 10 times the alphabet, in lowercase, followed by a new line.
*
*
* Return: void
*/
void print_alphabet_x10(void)
{
	int i;
	char c;

	i = 0;
	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
