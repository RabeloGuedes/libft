NAME = libft.a

PATH = ../src

CC = cc

CCFLAGS = -Wall -Wextra -Werror -c

CFILES = $(PATH)/ft_memcpy.c $(PATH)/ft_memset.c $(PATH)/ft_memmove.c $(PATH)/ft_bzero.c\
		$(PATH)/ft_atoi.c $(PATH)/ft_isalnum.c $(PATH)/ft_isalpha.c $(PATH)/ft_isascii.c\
		$(PATH)/ft_isdigit.c $(PATH)/ft_isprint.c $(PATH)/ft_strlcpy.c $(PATH)/ft_strlcat.c\
		$(PATH)/ft_strchr.c $(PATH)/ft_strrchr.c $(PATH)/ft_strncmp.c $(PATH)/ft_strdup.c\
		$(PATH)/ft_strlen.c $(PATH)/ft_tolower.c $(PATH)/ft_toupper.c $(PATH)/ft_memchr.c\
		$(PATH)/ft_memcmp.c	$(PATH)/ft_strnstr.c $(PATH)/ft_calloc.c $(PATH)/ft_substr.c\
		$(PATH)/ft_strjoin.c $(PATH)/ft_strtrim.c $(PATH)/ft_split.c $(PATH)/ft_itoa.c\
		$(PATH)/ft_strmapi.c $(PATH)/ft_striteri.c $(PATH)/ft_putchar_fd.c\
		$(PATH)/ft_putstr_fd.c $(PATH)/ft_putendl_fd.c $(PATH)/ft_putnbr_fd.c

TEST_FILES = test_isalpha.c

TEST_OBJS = $(TEST_FILES:.c=.o)

OBJSPATH = $(CFILES:.c=.o)

OBJS = $(OBJSPATH:$(PATH)/%=%)

WHITE = \033[37;49m
GREEN = \033[32;49m
YELLOW = \033[33;49m
RED = \033[31;49m
STRONG_RED = \033[49;91m

# BONUS_FILES = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
# 			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
# 			ft_lstclear.c ft_lstiter.c ft_lstmap.c

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "$(GREEN)$(NAME) compiled! $(WHITE)"

$(OBJS): $(CFILES)
	@$(CC) $(CCFLAGS) $(CFILES)
	@echo "$(YELLOW)compiling OBJS_FILES! $(WHITE)"

clean:
	@rm -f $(OBJS)
	@echo "$(RED)OBJS_FILES removed! $(WHITE)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(STRONG_RED)$(NAME) removed! $(WHITE)"

re: fclean all

test: all
	@cc -Wall -Wextra -Werror $(TEST_FILES) -o $(TEST_FILES:.c=) $(NAME)
	@./$(TEST_OBJS:.o=)
	@rm -f $(OBJS) $(NAME) $(TEST_FILES:.c=)
	@echo "$(STRONG_RED)All OBJS_FILES removed!$(WHITE)"