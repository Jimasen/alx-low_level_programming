#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
=======
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if ((n % 10) > 5)
    {
        printf("Last digit of %d is %d and is greater than 5\n",
            n, n % 10);
    }
    else if ((n % 10) < 6 && (n % 10) != 0)
    {
        printf("Last digit of %d is %d and is less than 6 and not 0\n",
            n, n % 10);
    }
    else
    {
        printf("Last digit of %d is %d and is 0\n",
            n, n % 10);
    }

    return (0);

>>>>>>> 96c19fc0ba8b44dbfbd2e2ca4a9ea50a76be2b87
}
