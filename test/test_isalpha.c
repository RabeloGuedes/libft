/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:43:46 by arabelo-          #+#    #+#             */
/*   Updated: 2023/05/25 14:42:21 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"

void	lowercase_test(char letter, int limit)
{
	PRINT_MAGENTA("	- Testing with %c", letter);
	if (ft_isalpha(letter))
		PRINT_GREEN("	Worked with %c!", letter);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter);
	if (ft_isalpha(letter + limit))
		PRINT_GREEN("	Worked with %c!", letter + limit);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter + limit);
	letter = 'z';
	PRINT_MAGENTA("	- Testing with %c", letter);
	if (ft_isalpha(letter))
		PRINT_GREEN("	Worked with %c!", letter);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter);
	if (!ft_isalpha(letter + limit))
		PRINT_GREEN("	Worked with %c!", letter + limit);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter + limit);
}

void	uppercase_test(char letter, int limit)
{
	PRINT_MAGENTA("	- Testing with %c", letter);
	if (ft_isalpha(letter))
		PRINT_GREEN("	Worked with %c!", letter);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter);
	if (ft_isalpha(letter + limit))
		PRINT_GREEN("	Worked with %c!", letter + limit);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter + limit);
	letter = 'Z';
	PRINT_MAGENTA("	- Testing with %c", letter);
	if (ft_isalpha(letter))
		PRINT_GREEN("	Worked with %c!", letter);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter);
	if (ft_isalpha(letter + limit))
		PRINT_GREEN("	Worked with %c!", letter + limit);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter + limit);
}

void	letter_test(void)
{
	char	letter;
	int		limit;

	letter = 'a';
	limit = 25;
	lowercase_test(letter, limit);
	letter = 'A';
	uppercase_test(letter, limit);
}

void	not_letter_test(void)
{
	char	letter;
	int		limit;

	letter = 'a';
	limit = 26;
	PRINT_MAGENTA("	- Testing with %c", letter + limit);
	if (!ft_isalpha(letter + limit))
		PRINT_GREEN("	Worked with %c!", letter + limit);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter + limit);
	letter = 'z';
	PRINT_MAGENTA("	- Testing with %c", letter + limit);
	if (!ft_isalpha(letter + limit))
		PRINT_GREEN("	Worked with %c!", letter + limit);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter + limit);
	letter = 'A';
	PRINT_MAGENTA("	- Testing with %c", letter + limit);
	if (!ft_isalpha(letter + limit))
		PRINT_GREEN("	Worked with %c!", letter + limit);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter + limit);
	letter = 'Z';
	limit = 6;
	PRINT_MAGENTA("	- Testing with %c", letter + limit);
	if (!ft_isalpha(letter + limit))
		PRINT_GREEN("	Worked with %c!", letter + limit);
	else
		PRINT_RED("	It did not work with %c, review your code!", letter + limit);
}

int	main(void)
{
	PRINT_BLUE("Testing with letters");
	letter_test();
	not_letter_test();
	return (0);
}