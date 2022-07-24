#include "main.h"
#include "stdio.h"
#include "stdlib.h"

/**
*main - prints the minimum number of coins to make change for amount.
*of money.
*@argv: number of command line arguments
*@argc: Array name
*Return: o
*/

int main(int argc, char *argv[])
{
	int cents, ncoins = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (0);
	}
	cents = atoi(argv[1]);

	while (cents > 0)
	{
		if (cents >= 25)
			cents = cents - 25;
		else if (cents >= 10)
			cents -= 10;
		else if (cents >= 5)
			cents -= 5;
		else if (cents >= 2)
			cents = cents - 2;
		else if (cents >= 1)
			cents = cents - 1;
		ncoins = ncoins + 1;
	}
	printf("%d\n", ncoins);
	return (0);
}
