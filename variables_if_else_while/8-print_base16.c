#include <stdio.h>
/** 
* main - entry point 
* Description: Write a program that prints all the numbers
* of base 16 in lowercase, followed by a new line.
*
* Return: Always 0 (Success) 
*/ 
int main(void)
{ 
	char n;
	
	n = '0'; 
	while (n <= '9') 
	{ 
	putchar(n);
	n++;
	}
	n = 'a';
	while (n <= 'f') 
	{ 
	putchar(n);
	n++; 
	}
	putchar('\n'); 
	return (0); 
}
