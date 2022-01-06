#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char	*c = "str a print";
	char	e = 'a';
	int len;

	printf("\n >> retour: %d << \n",printf(" print char :%c",e));
	ft_printf("\n retour ft: %d <<\n", ft_printf(" print char :%c", e));
	
	printf("\n retour: %d <<\n",printf(" print str %s",c));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf(" print str %s",c));
	printf("\n");
	
	printf("\n retour: %d <<\n",printf(" print str + char %s, %c",c,e));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf(" print str + char %s, %c",c,e));
	printf("\n");

	printf("\n retour: %d <<",printf(" print modulo i %i", 0));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf(" print modulo i %i", 0));
	printf("\n");
	
	printf("\n retour: %d <<\n",printf(" print modulo %%"));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf(" print modulo %%"));
	printf("\n");
	
	printf("\n retour: %d <<\n",printf(" modulo u %u", 1234));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf(" modulo u %u", 1234));
	printf("\n");
	
	
	printf("\n retour: %d <<\n",printf("int max avec modulo u %u", 2147473647));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("int max avec modulo u %u", 2147473647));
	printf("\n");
	
	
	printf("\n retour: %d <<i\n",printf("modulo x %x", 2147483647));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("modulo x %x", 2147483647));
	printf("\n");
	
	printf("\n retour: %d <<\n",printf("modulo X %X",21477));
	ft_printf("\n retour: %d <<\n",ft_printf("modulo X %X",21477));
	printf("\n");
	
	printf("\n retour: %d <<\n",printf("print ptr %p", c));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("print ptr %p", c));
	printf("\n");
}
