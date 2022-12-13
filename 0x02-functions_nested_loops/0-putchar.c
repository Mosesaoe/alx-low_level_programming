#include "_putchar"

/**
* main - entry point
*
* Return: on success(0).
*/
int main(void)
{
	char *sh = "_putchar"
	
	while (*sh)
	{
		_putchar (*sh);
		sh++;
	}
	_putchar('\n');
	
	return (0);
}

