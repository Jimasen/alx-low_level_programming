#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;
<<<<<<< HEAD

	sum = 0;

	srand(time(NULL));

=======
	sum = 0;
	srand(time(NULL));
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
<<<<<<< HEAD

=======
>>>>>>> e8b4987485af40e1747d8d9a0f7cc59c63431e78
	return (0);
}
