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

	while (*str != '\0')
{
    _putchar(*str);  /* affiche le caractère */
    str++;           /* avance d'un */
    if (*str != '\0')  /* vérifie qu'on n'est pas à la fin */
        str++;       /* avance encore d'un */
}
_putchar('\n');
