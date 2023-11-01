/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ult_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:45:16 by arabelo-          #+#    #+#             */
/*   Updated: 2023/11/01 15:00:56 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdio.h>
#include <string.h>

static int	find_charset(char *str, char *charset)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == charset[j] && str[i + j] && charset[j])
			j++;
		if (!charset[j])
			return (i);
		i++;
	}
	return (i);
}

static size_t	count_words(char *str, char *charset)
{
	size_t	words_counter;
	int		i;
	int		j;
	int		len;

	words_counter = 0;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == charset[j] && str[i + j] && charset[j])
			j++;
		if ((unsigned long)(i + j) < ft_strlen(str))
		{
			i += j;
			// j = 0;
			// while (ft_strlen(charset) > (unsigned long)j && str[j + i] == charset[j] && str[j + i] && charset[j])
			// 	j++;
			if (ft_strlen(charset) == (unsigned long)j)
				continue ;
			len = find_charset(&str[i], charset);
			words_counter++;
			j = 0;
			if ((unsigned long)(i + len) >= ft_strlen(str))
				break ;
			else
				i += len;
			while (str[i] != charset[0] && str[i])
				i++;
		}
		else
			break ;
	}
	return (words_counter);
}

static char	*extract_words(char *str, char *charset, char **array)
{
	int		i;
	int		len;
	int		j;
	int		index;

	i = 0;
	index = 0;
	while (str[i] && (unsigned long)i < ft_strlen(str) && (unsigned long)index < count_words(str, charset))
	{
		j = 0;
		while (str[i + j] == charset[j] && str[i + j] && charset[j])
			j++;
		if ((unsigned long)(i + j) < ft_strlen(str))
		{
			i += j;
			j = 0;
			while (ft_strlen(charset) > (unsigned long)j && str[j + i] == charset[j] && str[j + i] && charset[j])
				j++;
			if (ft_strlen(charset) == (unsigned long)j)
				continue ;
			len = find_charset(&str[i], charset);
			array[index] = ft_substr(str, i, len);
			if (!array[index])
			{
				ft_free_array(array);
				return (NULL);
			}
			index++;
			j = 0;
			if ((unsigned long)(i + len) >= ft_strlen(str))
				break ;
			else
				i += len;
			while (str[i] != charset[0] && str[i])
				i++;
		}
		else
			break ;
	}
	array[index] = NULL;
	return (str);
}

char	**ft_ult_split(char *str, char *charset)
{
	size_t	words_amount;
	char	**array;

	words_amount = count_words(str, charset);
	if (!words_amount)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (words_amount + 1));
	if (!array)
		return (NULL);
	if (!extract_words(str, charset, array))
		return (NULL);
	return (array);
}

int	main(void)
{
	// char	*str = "Hell";
	// char	*charset = " lo ";
	// char	*str = "Hello World";
	char	*str = "olololLol pool olopoolooolooololooooolollllloooooololllloloolo";
	// char	*str = "ololololololololololololololololololololol";
	// Answer: ["L", " po", " ", "opo", "oo", "oo", "oooo", "lllllooooo", "lll", "o", "o"];
	// char	*str = "olololLol pool olopoolooolooololoooool";
	// Answer: ["L", " po", " ", "opo", "oo", "oo", "oooo"];
	char	*charset = "ol";
	char	**array;
	int		i;

	i = 0;
	printf("words_counter: %zu\n", count_words(str, charset));
	// printf("words_counter2: %zu\n", count_words(str2, charset2));
	array = ft_ult_split(str, charset);
	while (array && array[i])
		printf("%s\n", array[i++]);
	if (array)
		ft_free_array(array);
	return (0);
}
// str: "Hello World"
// charset "ll"

// str: "Lol pool"
// charset: "ol"
