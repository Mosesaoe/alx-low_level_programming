#include "main.h"
/**
* print _alphabet - Entry point
* return: Always(0)
*
*/
void print_alphabet(void) /* print lower case alphabets*/
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
