#include <unistd.h>
/**
 * _putchar: write the character to stdout
 *
 * return: on success 1
 *
*/
int _putchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
