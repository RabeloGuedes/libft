/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 22:58:07 by arabelo-          #+#    #+#             */
/*   Updated: 2023/11/01 15:57:19 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	nbr_checker(char *nbr, char *base_from)
{
	while (nbr && *nbr)
		if (!ft_strchr(base_from, *nbr++))
			return (0);
	return (1);
}

int	get_base_index(char *base_from, char c)
{
	int	i;

	i = 0;
	while (base_from[i])
	{
		if (base_from[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	base_to_int(char *nbr, char *base_from)
{
	long long	n;
	long long	n2;
	int	sign;

	n = 0;
	n2 = 0;
	sign = 1;
	while (ft_isspace(*nbr))
		nbr++;
	if (*nbr == '+'|| *nbr == '-')
		if (*nbr++ == '-')
			sign = -1;
	while (*nbr && get_base_index(base_from, *nbr) != - 1)
	{
		n2 = n * ft_strlen(base_from) + get_base_index(base_from, *nbr);
		if (n2 * sign > INT32_MAX || n2 * sign < INT32_MIN)
			break ;
		n = n * ft_strlen(base_from) + get_base_index(base_from, *nbr++);
	}
	return (n * sign);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*n;
	int		num;
	int		len;
	int		sign;

	len = 0;
	sign = 1;
	if (!ft_check_base(base_from) || !ft_check_base(base_to)
		|| !nbr_checker(nbr, base_from))
		return ((void *)0);
	while (ft_isspace(*nbr))
		nbr++;
	if (*nbr == '+' || *nbr == '-')
		if (*nbr++ == '-')
			sign = -1;
	num = base_to_int(nbr, base_from);
}
