/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 22:11:06 by arabelo-          #+#    #+#             */
/*   Updated: 2023/04/08 22:29:41 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	dest_len;

	dest_len = ft_strlen(dest);
	dest += dest_len;
	printf("Dest: %c\n", *dest);
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (dest);
}
