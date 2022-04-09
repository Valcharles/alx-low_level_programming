#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
*
* Return : Always 0 (sucess/correct)
**/
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n % 10 > 5)
	{
		printf("Last digit of %i is %i is greater than 5\n", n, n % 10);
	}
	else if ( n % 10 == 0)
	{
		printf("Last digit of %i is %i is 0\n", n, n % 10);
	}
	else 
	{
		("Last digit of %i is %i less than 6 and not a 0\n", n, n % 10);
	}
	return(0);
}
