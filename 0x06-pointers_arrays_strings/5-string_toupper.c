#include "main.h"

/**
 *string_toupper- converts all lowercase letters in a string to uppercase.
 *
 *param: the string to convert.
 *return: lowercase letters converted to uppercase.
*/

char *string_toupper(char *)
{
	char *p = str;

	while (*p != '\0')
	{
		if (islower(*p))
		{
			*p = toupper(*p);
		}
		p++;
	}
}
