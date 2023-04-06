NAME = libft.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror -c
CFILES = ../ft_atoi.c ../ft_isalnum.c ../ft_isalpha.c ../ft_isascii.c ../ft_isdigit.c ../ft_isprint.c ../ft_isspace.c ../ft_strcpy.c ../ft_strdup.c ../ft_strlen.c ../ft_tolower.c ../ft_toupper.c
BFILES = ${CFILES} | sed /\.\.\///g | sed /\.c/\.o/g
RM = rm -f
MOVE = mv ${BFILES} ../

binaries:
	${CC} ${CCFLAGS} ${CFILES} && ${MOVE}
clean:
	${RM} ${BFILES}