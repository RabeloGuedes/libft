/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabelo- <arabelo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 18:55:41 by arabelo-          #+#    #+#             */
/*   Updated: 2023/05/24 19:32:45 by arabelo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_LIBFT_H
# define TEST_LIBFT_H

# include "../src/libft.h"
# include <stdio.h>

# define RESET_COLOR   	"\033[0;49m"
# define RED_COLOR     	"\033[0;41m"
# define GREEN_COLOR   	"\033[0;42m"
# define YELLOW_COLOR  	"\033[33m"
# define BLUE_COLOR    	"\033[34m"
# define MAGENTA_COLOR 	"\033[35m"
# define CYAN_COLOR    	"\033[36m"
# define NEW_LINE		"\n"

# define PRINT_RED(fmt, ...)     printf(RED_COLOR fmt RESET_COLOR NEW_LINE, ##__VA_ARGS__)
# define PRINT_GREEN(fmt, ...)   printf(GREEN_COLOR fmt RESET_COLOR NEW_LINE, ##__VA_ARGS__)
# define PRINT_YELLOW(fmt, ...)  printf(YELLOW_COLOR fmt RESET_COLOR NEW_LINE, ##__VA_ARGS__)
# define PRINT_BLUE(fmt, ...)    printf(BLUE_COLOR fmt RESET_COLOR NEW_LINE, ##__VA_ARGS__)
# define PRINT_MAGENTA(fmt, ...) printf(MAGENTA_COLOR fmt RESET_COLOR NEW_LINE, ##__VA_ARGS__)
# define PRINT_CYAN(fmt, ...)    printf(CYAN_COLOR fmt RESET_COLOR NEW_LINE, ##__VA_ARGS__)


#endif