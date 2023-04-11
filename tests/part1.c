#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	up_letter = 'A';
	char	low_letter = 'a';
	char	non_letter = '5';
	char	non_alnum = '#';
	char	h_tab = '\t';
	char	v_tab = '\v';
	char	r_return = '\r';
	char	new_line = '\n';
	char	form = '\f';
	char	space = ' ';
	int	non_ascii = 256;
	const char	str[17] = "Hello World, 42!";
	// char	dest[17] = "Hey, guys !";
	char	empty[1] = "";
	const char	*num1  = "	\v\n\r\f \t -1234ab56789";
	const char	*num2  = "	\v\n\r\f \t +42ab56789";
	const char	*non_valid_num  = "	\v\n\r\f \t +fta42ab56789";

	printf("********************* ft_lower test *********************\n");
	printf("Testing ft_tolower with '%c', result -> %c\n", up_letter, ft_tolower(up_letter));
	printf("Testing ft_tolower with '%c', result -> %c\n", low_letter, ft_tolower(low_letter));
	printf("Testing ft_tolower with '%c', result -> %c\n", non_letter, ft_tolower(non_letter));
	printf("********************* ft_lower test *********************\n\n");

	printf("********************* ft_upper test *********************\n");
	printf("Testing ft_upper with '%c', result -> %c\n", up_letter, ft_toupper(up_letter));
	printf("Testing ft_upper with '%c', result -> %c\n", low_letter, ft_toupper(low_letter));
	printf("Testing ft_upper with '%c', result -> %c\n", non_letter, ft_toupper(non_letter));
	printf("********************* ft_upper test *********************\n\n");

	printf("********************* ft_isalpha test *********************\n");
	printf("Testing ft_isalpha with '%c', result -> %d\n", up_letter, ft_isalpha(up_letter));
	printf("Testing ft_isalpha with '%c', result -> %d\n", low_letter, ft_isalpha(low_letter));
	printf("Testing ft_isalpha with '%c', result -> %d\n", non_letter, ft_isalpha(non_letter));
	printf("********************* ft_isalpha test *********************\n\n");

	printf("********************* ft_isalnum test *********************\n");
	printf("Testing ft_isalnum with '%c', result -> %d\n", up_letter, ft_isalnum(up_letter));
	printf("Testing ft_isalnum with '%c', result -> %d\n", low_letter, ft_isalnum(low_letter));
	printf("Testing ft_isalnum with '%c', result -> %d\n", non_letter, ft_isalnum(non_letter));
	printf("Testing ft_isalnum with '%c', result -> %d\n", non_alnum, ft_isalnum(non_alnum));
	printf("********************* ft_isalnum test *********************\n\n");

	printf("********************* ft_isdigit test *********************\n");
	printf("Testing ft_isdigit with '%c', result -> %d\n", up_letter, ft_isdigit(up_letter));
	printf("Testing ft_isdigit with '%c', result -> %d\n", low_letter, ft_isdigit(low_letter));
	printf("Testing ft_isdigit with '%c', result -> %d\n", non_letter, ft_isdigit(non_letter));
	printf("Testing ft_isdigit with '%c', result -> %d\n", non_alnum, ft_isdigit(non_alnum));
	printf("********************* ft_isdigit test *********************\n\n");

	printf("********************* ft_isprint test *********************\n");
	printf("Testing ft_isprint with '%c', result -> %d\n", up_letter, ft_isprint(up_letter));
	printf("Testing ft_isprint with '%c', result -> %d\n", low_letter, ft_isprint(low_letter));
	printf("Testing ft_isprint with '%c', result -> %d\n", non_letter, ft_isprint(non_letter));
	printf("Testing ft_isprint with '%c', result -> %d\n", non_alnum, ft_isprint(non_alnum));
	printf("Testing ft_isprint with '%c', result -> %d\n", h_tab, ft_isprint(h_tab));
	printf("********************* ft_isprint test *********************\n\n");

	printf("********************* ft_isascii test *********************\n");
	printf("Testing ft_isascii with '%c', result -> %d\n", up_letter, ft_isascii(up_letter));
	printf("Testing ft_isascii with '%c', result -> %d\n", low_letter, ft_isascii(low_letter));
	printf("Testing ft_isascii with '%c', result -> %d\n", non_letter, ft_isascii(non_letter));
	printf("Testing ft_isascii with '%c', result -> %d\n", non_alnum, ft_isascii(non_alnum));
	printf("Testing ft_isascii with '%c', result -> %d\n", h_tab, ft_isascii(h_tab));
	printf("Testing ft_isascii with '%c', result -> %d\n", non_ascii, ft_isascii(non_ascii));
	printf("********************* ft_isascii test *********************\n\n");

	printf("********************* ft_isspace test *********************\n");
	printf("Testing ft_isspace with '%c', result -> %d\n", up_letter, ft_isspace(up_letter));
	printf("Testing ft_isspace with '%c', result -> %d\n", low_letter, ft_isspace(low_letter));
	printf("Testing ft_isspace with '%c', result -> %d\n", non_letter, ft_isspace(non_letter));
	printf("Testing ft_isspace with '%c', result -> %d\n", non_alnum, ft_isspace(non_alnum));
	printf("Testing ft_isspace with '%c', result -> %d\n", h_tab, ft_isspace(h_tab));
	printf("Testing ft_isspace with '%c', result -> %d\n", v_tab, ft_isspace(v_tab));
	printf("Testing ft_isspace with '%c', result -> %d\n", r_return, ft_isspace(r_return));
	printf("Testing ft_isspace with '%c', result -> %d\n", new_line, ft_isspace(new_line));
	printf("Testing ft_isspace with '%c', result -> %d\n", form, ft_isspace(form));
	printf("Testing ft_isspace with '%c', result -> %d\n", space, ft_isspace(space));
	printf("Testing ft_isspace with '%c', result -> %d\n", non_ascii, ft_isspace(non_ascii));
	printf("********************* ft_isspace test *********************\n\n");

	printf("********************* ft_strlen test *********************\n");
	printf("Testing ft_strlen with '%s', result -> %zu\n", str, ft_strlen(str));
	printf("Testing ft_strlen with '%s', result -> %zu\n", empty, ft_strlen(empty));
	printf("********************* ft_strlen test *********************\n\n");

	// printf("********************* ft_strcpy test *********************\n");
	// printf("Testing ft_strcpy with src ('%s') before copying.\n", str);
	// printf("Testing ft_strcpy with dest ('%s') before copying.\n", dest);
	// ft_strcpy(dest, str);
	// printf("Testing ft_strcpy with src ('%s') after copying.\n", str);
	// printf("Testing ft_strcpy with dest ('%s') after copying.\n", dest);
	// printf("********************* ft_strcpy test *********************\n\n");

	printf("********************* ft_atoi test *********************\n");
	printf("Testing ft_atoi with '%s', result -> %d\n", num1, ft_atoi(num1));
	printf("Testing ft_atoi with '%s', result -> %d\n", num2, ft_atoi(num2));
	printf("Testing ft_atoi with '%s', result -> %d\n", non_valid_num, ft_atoi(non_valid_num));
	printf("********************* ft_atoi test *********************\n\n");
}