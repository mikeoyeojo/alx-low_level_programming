#include <stdio.h>

/**
* main - prints the largest prime factor of given number
* Return: 0
*/
int main(void)
{
	long int num = 612852475143;
	long int i;

	for (i = 2; i < num; i++)
	{
		if ((num % i) == 0)
		{
			num = num / i;
		}
	}
	printf("%ld\n", i);
	return (0);
}
