#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"
#include <stdio.h>

int main()
{
	char	*c = "str a print";
	char	e = 'a';
	int len;

	printf("\n \n >> retour: %d << \n",printf(" print char :%c",e));
	ft_printf("\n retour ft: %d <<\n", ft_printf(" print char :%c", e));
}	
/*	
	printf("\n retour: %d <<\n",printf("%s",c));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("%s",c));
	printf("\n");
	

	printf("\n retour: %d <<\n",printf("%s, %c",c,e));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("%s, %c",c,e));
	printf("\n");

	
	// avec un segfault: printf("%s\n %c\n", e, c);
	//avec un segfault: ft_printf("%s\n %c\n", e, c);
	
	printf("\n retour: %d <<",printf("%i", 0));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("%i", 0));
	printf("\n");
	
	printf("\n retour: %d <<\n",printf("%%"));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("%%"));
	printf("\n");
	
	printf("\n retour: %d <<\n",printf("%u", -1234));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("%u", -1234));
	printf("\n");
	
	
	printf("\n retour: %d <<\n",printf("%u", 2147473647));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("%u", 2147473647));
	printf("\n");
	
	
	printf("\n retour: %d <<i\n",printf("%x",2147483647));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("%x",2147483647));
	printf("\n");
	
	printf("\n retour: %d <<\n",printf("%X",2147473647));
	ft_printf("\n retour: %d <<\n",ft_printf("%X",2147473647));
	printf("\n");
	
	printf("\n retour: %d <<\n",printf("%p", c));
	ft_printf("\n retour avec ft: %d <<\n",ft_printf("%p", c));
	printf("\n");
}
*/
