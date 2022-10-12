#include <stdio.h>
/**
 * main - Print if number is postive,zero or negative
 *
 *
 *
 * Return: Always (Success)
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
