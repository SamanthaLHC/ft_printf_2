#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char	*c = "str a print";
	char	e = 'a';
	printf("print char avec le vrai printf: %c\n", e);
	ft_printf("print char avec ft: %c\n", e);
	printf("str avec printf: %s\n", c);
	ft_printf("str avec ft: %s\n", c);
	printf("deux variables types différents avec printf: %s, %c\n", c, e);
	ft_printf("idem avec ft: %s, %c\n", c, e);
	// avec un segfault: printf("%s\n %c\n", e, c);
	//avec un segfault: ft_printf("%s\n %c\n", e, c);
	ft_printf("modulo d avec ft: %d\n", 0);
	ft_printf("modulo i avec ft: %i\n", 0);
	printf("modulo d avec printf: %d\n", 0);
	printf("modulo i avec printf: %i\n", 0);
	ft_printf(" Je print un modulo: %%\n");
	printf(" Je print un modulo: %%\n");
	ft_printf("modulo u avec ft: %u\n", -1234);
	printf("modulo u avec printf: %u\n", -1234);
	ft_printf("modulo u avec ft: %u\n", 2147483647);
	printf("modulo u avec printf: %u\n", 2147483647);
	printf("modulo x avec printf: %x\n", 2147483647);
	ft_printf("modulo x avec ft: %x\n", 2147483647);
	printf("modulo X avec printf: %X\n", 2147483647);
	ft_printf("modulo X avec ft: %X\n", 2147483647);
	printf("modulo p avec printf: %p\n", c);
	ft_printf("modulo p avec ft: %p\n", c);
	//printf("avec un spec non géré: %z\n", c);
}
