#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main ()
{
	char* password = genereatepassword();

	printf("generate password: %s\n", password);
	free (password);

	return (0);
}
