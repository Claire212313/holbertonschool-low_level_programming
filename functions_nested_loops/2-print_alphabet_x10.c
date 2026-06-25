#include "main.h"
/**
 * void print_alphabet_x10(void)
 * description:Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
 int i, j;
 char c;

 i = 0;
 while (i<10)
 {
 c = 'a';
 while ('c<='z')
 {
 putchar(c);
 c++;
 }
 putchar('\n');
 i++;
 }
 return (0);
}
