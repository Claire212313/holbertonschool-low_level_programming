#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)        /* on s'arrete a n car tableau d'int, pas de \0 */
	{
		printf("%d", a[i]);      /* affiche l'element a la position i */
		if (i < n - 1)           /* si ce n'est pas le dernier element */
			printf(", "); /* virgule + espace apres chaque nombre sauf le dernier */
		i++;
	}
	printf("\n");
}

