/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 16:23:31 by arabelo-          #+#    #+#             */
/*   Updated: 2023/04/09 16:56:59 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, unsigned int n)
{
	size_t	dest_len;

	dest_len = ft_strlen(dest);
	dest += dest_len;
	while (*src && n-- > 0)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
