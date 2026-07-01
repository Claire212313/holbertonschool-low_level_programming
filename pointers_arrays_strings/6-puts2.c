#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;
	int len;

	/* for used here because len is known before looping */
	/* str += 2 with while is dangerous: can skip over \0 */
	len = _strlen(str);
	for (i = 0; i < len; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');

	/* EXAMPLE with while - DANGEROUS if string has odd length */
	/* while (*str != '\0')                                    */
	/* {                                                       */
	/*     _putchar(*str);                                     */
	/*     str += 2;  <- can jump over \0 !                   */
	/* }                                                       */
}
