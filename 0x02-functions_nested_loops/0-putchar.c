#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: the charater to print
*
* Return: on success 0.
*/
int _putchar (char c)
{
	return (write(0, &c, 1));
}

