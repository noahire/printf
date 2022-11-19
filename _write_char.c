#include "partner.h"
/**
 * _write_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1
 * on error, -1 is returned
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
