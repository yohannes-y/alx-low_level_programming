#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10 starting from 0,
 *        only using putchar and without char variables.
 *
 * Return: Always 0.
 */
int main(void)
{
	char num;

	for (num = 'z'; num >= 'a'; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
