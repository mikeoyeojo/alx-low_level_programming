#include <unistd.h>

/**
 * main - _putchar
 *
 * Description: C
 *
 * Return: 0
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
