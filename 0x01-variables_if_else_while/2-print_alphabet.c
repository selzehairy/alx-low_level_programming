#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the alphabet in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
