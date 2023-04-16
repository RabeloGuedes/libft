CC = cc
CCFLAGS = -Wall -Wextra -Werror -c
NAME = libft.a
CFILES = ft_memcpy.c ft_memset.c ft_memmove.c ft_bzero.c\
		ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		ft_isdigit.c ft_isprint.c ft_strlcpy.c ft_strlcat.c\
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strdup.c\
		ft_strlen.c ft_tolower.c ft_toupper.c ft_memchr.c\
		ft_memcmp.c	ft_strnstr.c ft_calloc.c ft_substr.c\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS_FILES = ft_lstnew.c ft_lstadd_front.c

B_BONUS_FILES = ${BONUS_FILES:.c=.o}

BFILES = ${CFILES:.c=.o}

RM = rm -f

all: ${NAME}

${NAME}: ${BFILES}
	ar rc ${NAME} ${BFILES}

${BFILES}: ${CFILES}
	${CC} ${CCFLAGS} ${CFILES}

${B_BONUS_FILES}: ${BONUS_FILES}
	${CC} ${CCFLAGS} ${BONUS_FILES}
	ar rc ${NAME} ${B_BONUS_FILES}

bonus: ${B_BONUS_FILES} 

clean:
	${RM} ${BFILES} ${B_BONUS_FILES}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re