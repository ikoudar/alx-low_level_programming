#include "main.h"

/**
  *description: int _isalpha to check for alphabet character
  *
  *Return 1 if c is a letter, lowercase or uppercase, 0 otherwise.
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
