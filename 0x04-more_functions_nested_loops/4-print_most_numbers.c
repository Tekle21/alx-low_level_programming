#include "main.h"

/**
 * print_numbers - prints numbers 0-9
 * do not print  2 and 4
 * Return: void
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
          if(c='2' || c='4')
           {
             continue;
           }
		_putchar(c);
	}
	_putchar('\n');
}
