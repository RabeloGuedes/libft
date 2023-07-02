CC = cc
CCFLAGS = -Wall -Wextra -Werror -c -I ./inc
NAME = libft.a
OBJS_PATH = objs/
SRC_PATH = src/
CHAR_PATH = src/char/
CONVERTER_PATH = src/converter/
LISTS_PATH = src/lists/
MEMORY_PATH = src/memory/
PRINTF_PATH = src/printf/
STRINGS_PATH = src/strings/

STRINGS =	$(STRINGS_PATH)ft_putendl_fd.c $(STRINGS_PATH)ft_putnbr_fd.c\
			$(STRINGS_PATH)ft_putstr_fd.c $(STRINGS_PATH)ft_split.c\
			$(STRINGS_PATH)ft_strchr.c $(STRINGS_PATH)ft_strdup.c\
			$(STRINGS_PATH)ft_striteri.c $(STRINGS_PATH)ft_strjoin.c\
			$(STRINGS_PATH)ft_strlcat.c $(STRINGS_PATH)ft_strlcpy.c\
			$(STRINGS_PATH)ft_strlen.c $(STRINGS_PATH)ft_strmapi.c\
			$(STRINGS_PATH)ft_strncmp.c $(STRINGS_PATH)ft_strnstr.c\
			$(STRINGS_PATH)ft_strrchr.c  $(STRINGS_PATH)ft_strtrim.c\
			$(STRINGS_PATH)ft_substr.c

CHAR =		$(CHAR_PATH)ft_isalnum.c $(CHAR_PATH)ft_isalpha.c $(CHAR_PATH)ft_isascii.c\
			$(CHAR_PATH)ft_isdigit.c $(CHAR_PATH)ft_isprint.c $(CHAR_PATH)ft_putchar_fd.c\
			$(CHAR_PATH)ft_tolower.c $(CHAR_PATH)ft_toupper.c

CONVERTER = $(CONVERTER_PATH)ft_atoi.c $(CONVERTER_PATH)ft_itoa.c

LISTS =		$(LISTS_PATH)ft_lstadd_back.c $(LISTS_PATH)ft_lstadd_front.c\
			$(LISTS_PATH)ft_lstclear.c $(LISTS_PATH)ft_lstdelone.c $(LISTS_PATH)ft_lstiter.c\
			$(LISTS_PATH)ft_lstlast.c $(LISTS_PATH)ft_lstmap.c $(LISTS_PATH)ft_lstnew.c\
			$(LISTS_PATH)ft_lstsize.c

MEMORY =	$(MEMORY_PATH)ft_bzero.c $(MEMORY_PATH)ft_calloc.c $(MEMORY_PATH)ft_memchr.c\
			$(MEMORY_PATH)ft_memcmp.c $(MEMORY_PATH)ft_memcpy.c $(MEMORY_PATH)ft_memmove.c\
			$(MEMORY_PATH)ft_memset.c

PRINTF =	$(PRINTF_PATH)ft_format_checker.c $(PRINTF_PATH)ft_print_address.c $(PRINTF_PATH)ft_print_hex.c\
			$(PRINTF_PATH)ft_print_int.c $(PRINTF_PATH)ft_print_strchr.c $(PRINTF_PATH)ft_print_uint.c\
			$(PRINTF_PATH)ft_printf.c

SRC_FILES = $(STRINGS) $(CHAR) $(CONVERTER) $(LISTS)\
			$(MEMORY) $(PRINTF)

OBJS_FILES = $(SRC_FILES:.c=.o)

OBJS_LOCATION = $(patsubst %, $(OBJS_PATH)%, $(notdir $(OBJS_FILES)))

RM = rm -f

# Colors
BLACK = \033[30m
RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
MAGENTA = \033[35m
CYAN = \033[36m
WHITE = \033[37m
SUPER_RED = \033[91m
SUPPER_GREEN = \033[92m
SUPPER_YELLOW = \033[93m
SUPPER_BLUE = \033[94m
SUPPER_MAGENTA = \033[95m
SUPPER_CYAN = \033[96m

# Colors

all: $(NAME)

$(NAME): create_obj_dir $(OBJS_LOCATION) moving_objs
	@ar rc $(NAME) $(OBJS_LOCATION)

create_obj_dir:
	@test -d $(OBJS_PATH) || mkdir -p $(OBJS_PATH)

moving_objs:
	@if ! [ $$(find ./objs -type f -name '*.o' | wc -l ) -gt 0 ]; then mv $(OBJS_FILES) $(OBJS_PATH); fi
# @mv $(OBJS_FILES) $(OBJS_PATH)

$(OBJS_LOCATION): $(SRC_FILES)
	@$(CC) $(CCFLAGS) $< -o $@

clean:
	@$(RM) -r $(OBJS_PATH)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

animation:
	@echo "$(RED) #+:+#                   :#:#:       +#+:+#+:+#+     +#++#+:::#+:+#:     #+#+:#:#::#+#+::+#+##+#::$(WHITE)"
	@echo "$(YELLOW) #+#+#                   :###:       #++#+#+#:+#:    #+#+::#++:#:#:+     #+#:#:+:+##+#+##:#+:#+#+#$(WHITE)"
	@echo "$(GREEN) :#+#:                   ##:##       ::#     :+#::   #::#+                         #:#+:$(WHITE)"
	@echo "$(CYAN) ##:##                   ##+##       #:+     +##+    +#:#+                         #+++#$(WHITE)"
	@echo "$(BLUE) #+++#                   ##:##       ++#+::#:+#:     #++:#:#++:::+#+               #:#:#$(WHITE)"
	@echo "$(MAGENTA) #+#+#                   :###:       #:##+#+#::+     +::+#:#+::+##+:               :+::#$(WHITE)"
	@echo "$(SUPER_RED) #+#+#                   #+#+#       #+#     ##+#    ::#+#                         #:::#$(WHITE)"
	@echo "$(SUPPER_YELLOW) #+#+#                   #+#+#       #+#     +##+#   #+::#                         #+:+#$(WHITE)"
	@echo "$(SUPPER_GREEN) +:+#+:+#+:+#+:#+#+#     :#:#:       :#+#+::###:+    +#++#                         :+:+:$(WHITE)"
	@echo "$(SUPPER_CYAN) #+:+#+:+#+:+#+#+#+#     ::#::       +:#+#+::##:     ::#:+                         :+:+#$(WHITE)"
