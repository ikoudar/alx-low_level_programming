#include "main.h"

/**
  *_isupper- function that checks uppercase.
  *
  *@c: character
  *
  *Return: 1 if c is uppercase, 0 other wise.
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
