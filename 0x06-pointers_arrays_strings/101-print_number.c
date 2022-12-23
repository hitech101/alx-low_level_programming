#include "main.h"

/**
* print_number - prints an interger.
* @n: interger
* Return: nothing.
*/
 * print_number - Prints any integer with putchar
 * @n : Number to prints
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		n *= -1;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + n % 10);

	x = n;

	if (x / 10)
		print_number(x / 10);
	
	_putchar(x % 10 + '0');

}
