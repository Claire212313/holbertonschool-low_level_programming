#include <stdio.h>
/**
 * main - entry point
 * Description: prints the alphabet in lowercase, followed by a new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
