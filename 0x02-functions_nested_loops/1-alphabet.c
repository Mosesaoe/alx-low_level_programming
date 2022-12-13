#include "main.h"

/**
* print _alphabet - Entry point
* Return: 0
*
*/

/* print lower case alphabets*/
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
