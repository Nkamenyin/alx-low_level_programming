#include <stdio.h>
/**
* main - print alphabes a to z
* Return: 0
*/
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
