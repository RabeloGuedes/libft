/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 20:12:38 by arabelo-          #+#    #+#             */
/*   Updated: 2023/08/04 23:15:10 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

// void	put_addr(unsigned char c)
// {
// 	if (c > 15)
// 	{
// 		put_addr(c / 16);
// 		put_addr(c % 16);
// 	}
// 	else
// 		ft_printf("%c", HEX_TABLE_LOWER[c]);
// }

void	print_hex(unsigned char *str, unsigned int index)
{
	unsigned int	i;
	unsigned int	j;
	int				left_chars;

	i = 0;
	j = 0;
	left_chars = 40;
	while (str[j])
		j++;
	if (j > index)
	{
		j = 16;
		while (str[index] && j--)
		{
			if (i > 1)
			{
				ft_printf(" ");
				i = 0;
				left_chars--;
			}
			i++;
			ft_printf("%x", str[index++]);
			left_chars -= 2;
			if (!str[index])
			{
				while (left_chars--)
					ft_printf(" ");
			}
			if (j < 1)
			{
				ft_printf(" ");
				left_chars--;
				return ;
			}
		}
	}
}

void	print_addr(unsigned char *str, unsigned int index)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	if (i < index)
		return ;
	ft_printf("%p: ", &str[index]);
}

void	print_str(unsigned char *str, unsigned int index)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	if (i > index)
	{
		i = 16;
		while (str[index] && i--)
		{
			if (ft_isprint(str[index]))
				ft_printf("%c", str[index++]);
			else
				ft_printf(".");
		}
	}
	ft_printf("\n");
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*str;
	unsigned int	hex;

	i = 0;
	str = (unsigned char *)addr;
	hex = 0;
	if (!size)
		return (addr);
	while (str[i])
		i++;
	while (hex < i && size--)
	{
		print_addr(str, hex);
		print_hex(str, hex);
		print_str(str, hex);
		hex += 16;
	}
	return (addr);
}
