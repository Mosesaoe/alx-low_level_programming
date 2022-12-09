#include <stdio.h>
/**
 * main - Entry
 * 
 *  Return: Always 0 (success)
 */
 
 int main(void)
{
	char letter; /*Declarling statement*/

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
