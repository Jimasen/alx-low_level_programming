#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;
<<<<<<< HEAD

=======
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
<<<<<<< HEAD

=======
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	_putchar('\n');
}
