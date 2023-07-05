#include "main.h"

/**
 * _puts_recursion - print a string followed by a new line
 * @s: the string to print
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
