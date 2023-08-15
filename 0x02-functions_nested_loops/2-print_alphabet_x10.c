#include "main.h"
/**
* print_alphabet_x10 - prints alphabet ×10 times
* Return: void
*/
void print_alphabet_x10(void)
{
	char alp;
	int n;

	n = 0;
	while (n < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
		n++;
	}
}
