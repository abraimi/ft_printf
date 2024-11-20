#include "libftprintf.h"
#include <stdio.h>

int main()
{
	ft_printf("[FT_PRINTF]\n	inti: %i,\n\
	intd: %d,\n\
	str: %s,\n\
	char: %c,\n\
	hex: %x,\n\
	heX: %X\n\n", 12348, -144845, "Hello, world", 'p', -5, -5);
	printf("[PRINTF]\n	inti: %i,\n\
	intd: %d,\n\
	str: %s,\n\
	char: %c,\n\
	hex: %x,\n\
	heX: %X\n", 12348, -144845, "Hello, world", 'p', -5, -5);
	return (0);
}