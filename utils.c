#include "main.h"

/**
 * new_is_printable - Evaluates if char is printable
 *
 * @c: char to be evluated
 *
 * Return: 1 if c is printable, 0 if no
*/

int new_is_printable(char c)
{
	if (c >= 32 && c < 127)
		return (1);

	return (0);
}

/**
 * append_hexa_code - Append ascci in hexa code to buffer
 *
 * @buffer: Array of chars
 * @i: Index at which to start append
 * @ascii_code: Asci code
 *
 * Return: Always 3
*/

int append_hexa_code(char ascii_code, char buffer[], int i)
{
	char map_to[] = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}

/**
 * is_digit - Verifies if a char is a digit
 *
 * @c: Char to be evaluated
 *
 * Return: 1 if c is a digit, 0 otherwise
*/

int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}

/**
 * new_convert_size_number - Casts a number to the specified size
 *
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
*/

long int new_convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}

/**
 * new_convert_size_unsgnd - Casts a number to the specified size
 *
 * @num: Number to be casted
 * @size: Number indicating the type to be casted
 *
 * Return: Casted value of num
*/

long int new_convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
