#include "main.h"

/**
 * _print_rev_recirsion - prints a string in reverse
 * @s: pionter to string.
 * Return: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
