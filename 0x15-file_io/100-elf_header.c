#include "elf.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
  *check_elf- check if the file is an ELF.
  *@e_ident: pointer
  *Description: if the file isn't and ELF exit n.
*/

void check_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i < 4; i++)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error Not an ELF file\n");
			exit(98);
		}
	}
}

/**
  *print_magic- print the magic numbers
  *@e_ident: pointer
  *Description: magic nbr are separate by space
*/

void print_magic(unsigned char *e_ident)
{
	int i;

	printf("  Magic:  ");

	for (i = 0; i < E_IDENT; i++)
	{
		printf("%02x", e_ident[i]);

		if (i == E_IDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
