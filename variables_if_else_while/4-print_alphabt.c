#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints the alphabet in lowercase except e and q,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		if (n != 'e' && n != 'q')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
