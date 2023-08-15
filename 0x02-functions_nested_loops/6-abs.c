#include "main.h"
/**
* _abs - computs the absolute value of an integerc
*@c: function parameter
* Return: absolute value of number or c
*/
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
