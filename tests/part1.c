#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	up_letter = 'A';
	char	low_letter = 'a';
	char	non_letter = '5';

	printf("Testing ft_tolower with 'A', result -> %c\n", ft_tolower(up_letter));
	printf("Testing ft_tolower with 'a', result -> %c\n", ft_tolower(low_letter));
	printf("Testing ft_tolower with '5', result -> %c", ft_tolower(non_letter));
}