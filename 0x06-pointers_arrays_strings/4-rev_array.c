#include "main.h"
/**
* reverse_array - a function that reverses the content of an array of integers.
* @a: array of integers
* @n: numberof elements to swap
* Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
