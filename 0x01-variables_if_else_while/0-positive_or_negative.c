#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print if the number is positive, zero, or negative
 *
 * Description:using the main function
 * printing "programming is positive, zero, or negative
 * Return: 0 always
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* code from here*/
	if (n > 0)
	{
		printf("%i is positivee\n", n);
	} 
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
