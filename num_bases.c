#include "main.h"
/**
 * num_bases - this funtion converts numbers to other base formats
 * @num: number to be converted
 * @base: the base format to convert the number to
 * @lowercase: if the number is converted to hex numbers,
 * it determines if the cases should be printed upper or lower cases
 * Return: a pointer
 */

char *num_bases(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buf[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buf[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
