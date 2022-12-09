#include <stdio.h>
/**
* main -Entry point
*
* Return: Alway 0 (success)
*/
int main(void)

{
	char lower_case; /*statement declaration*/
	char upper_case;

	/* Prints lower case alphabets*/
	for (lower_case = 'a'; lower_case <= 'z'; lower_case++)
	{
		putchar(lower_case);
	}
	
	/* Prints upper case alphabets*/
	for (upper_case = 'A'; upper_case <= 'Z'; upper_case++)
	{
		putchar(upper_case);
	}

	/* new line*/
	putchar ('\n');

	return (0);
}