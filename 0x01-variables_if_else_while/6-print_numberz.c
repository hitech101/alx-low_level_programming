#include <stdio.h>
/**
* main - print if the number is postive, zero, or negative
*
* Description: using the main function 
* this program prints "Programming all single digit numbers of base 10 starting from 0, followed by a new line.'
* Return: 0
*/
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
