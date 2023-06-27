#include "main.h"

/**
  *rev_string - reverses a string in place.
  *
  *@s: pointer to the string.
*/

void rev_string(char *s)
{
	int length = 0;
	int start = 0;
	int end = 0;
	char temp;

	/*calcule the length of string*/
	while (s[length] != '\0')
	{
		length++;
	}

	/*reverse the string*/
	start = 0;
	end = length - 1;
	/*swap the character at the start and end indices*/
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
	/*move the start and end toward*/
		start++;
		end--;
	}
}
