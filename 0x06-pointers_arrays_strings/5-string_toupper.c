#include "main.h"
#include <stdio.h>
/**
 *string_toupper- function that changes all lowercase letters.
 *
 *
 *Return:str
 */
char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'Z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
