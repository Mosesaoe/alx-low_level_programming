#include "main.h"

/**
* print _alphabet - Entry point
* Return: 0 Always
*
*/

void print_alphabet(void) /* print lower case alphabets*/
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
