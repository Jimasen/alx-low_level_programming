#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longi;
<<<<<<< HEAD

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

=======
	longi = 0;
	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
