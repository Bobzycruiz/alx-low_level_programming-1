#include <stdio.h>


/**
 * main - Entry point
 *
 * Return: 0 Always 
 */
int main(void)
{
	char l;

	l = 'a';
	while (l <= 'z')
	{
		if ((l != 'e') && (l != 'q'))
		{
			putchar(l);
			l++;
		}
		else
		{
			l++;
		}
	}
	putchar('\n');
	return (0);
}
