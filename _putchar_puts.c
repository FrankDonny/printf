#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout and it uses
 * a local buffer of 1024 to call write
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	static char buffer[1024];
	static int a;

	if (a >= 1024 || c == -1)
	{
		write(1, &buffer, a);
		a = 0;
	}
	if (c != -1)
	{
		buffer[a] = c;
		a++;
	}
	return (1);
}

/**
 * _puts - writes str to stdout
 * @str: string to be printed
 * Return: i, str printed
 */

int _puts(char *str)
{
	register int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (i);
}
