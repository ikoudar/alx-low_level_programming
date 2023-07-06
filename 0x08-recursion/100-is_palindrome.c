#include <string.h>
#include "main.h"
#include <stdio.h>

/**
  *is_palindrome-  function that returns 1,
  *if a string is a palindrome and 0 if not.
  *
  *@s: string/
  *Return: 0
*/

int is_palindrome(char *s)
{
	if (*s <= 1)
	{
		return (1);
	}
	return (is_palindrome(s));
}
