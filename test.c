// #include <stdio.h>
#include "./inc/libft.h"

int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "Bonjour les amin ches\n\t\rc\n est fo u\ttout\rce qu on peut faire avec\t \r\nprint_memory\r\t \r\rlol\tlol\n \n";
	unsigned int	len;
	unsigned int	len2;

	len = ft_strlen(str);
	len2 = ft_strlen(str2);
	// ft_printf("String: %s\n", str);
	ft_print_memory(str, len);
	ft_printf("\n");
	ft_print_memory(str2, len2);
	return (0);
}