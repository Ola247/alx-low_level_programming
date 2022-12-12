#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random nuber to int n everytime
 * it executes and prints it
 * return: Always 0 (success)  
 */

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is possitive\n", n);

	else if (n == 0)
		printf("%d is zero\n", n);

	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);

}

