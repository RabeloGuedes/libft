CC = cc
CCFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
CFILES = ft_memcpy.c\
		ft_memset.c\
		ft_memmove.c\
		ft_bzero.c\
		ft_atoi.c\
		ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprint.c\
		ft_isspace.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_strncmp.c\
		ft_strdup.c\
		ft_strlen.c\
		ft_tolower.c\
		ft_toupper.c
BFILES = ${CFILES:.c=.o}
RM = rm -f

all: ${NAME}
${NAME}: binaries
	ar rc ${NAME} ${BFILES}
binaries:
	${CC} ${CCFLAGS} ${CFILES}
clean:
	${RM} ${BFILES}
fclean: clean
	${RM} ${NAME}
re: fclean all