NAME = libft.a
CC = cc
CCFLAGS = -Wall -Wextra -Werror -c
CCWFLAGS = -Wall -Wextra -Werror
CFILES = ../ft_atoi.c ../ft_isalnum.c ../ft_isalpha.c ../ft_isascii.c ../ft_isdigit.c ../ft_isprint.c ../ft_isspace.c ../ft_strlcpy.c ../ft_strlen.c ../ft_tolower.c ../ft_toupper.c
BFILES = ${CFILES:.c=.o}
RM = rm -f
MOVE = mv *.o ../
TEST = part1.c
TESTOUTPUT =${TEST:.c=}
LIBFLAGS = -L. -lft

test: lib
	${CC} ${CCWFLAGS} ${TEST} -o ${TESTOUTPUT} ${LIBFLAGS} && ./${TESTOUTPUT} && rm *.a ${TESTOUTPUT}
lib: ${NAME} clean
${NAME}: binaries
	ar rc ${NAME} ${BFILES}
binaries:
	${CC} ${CCFLAGS} ${CFILES} && ${MOVE}
clean:
	${RM} ${BFILES}
fclean: clean
	${RM} ${NAME}