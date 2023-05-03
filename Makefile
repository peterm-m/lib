NAME = libft.a
# MODULES
# ft_ctype
# ft_string
# ft_stdlib
# ft_stdio
# ft_lst
# Compilar entera o compilar modulos.
SRC = ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_itoa.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c\
	ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c\
	ft_split.c\
	ft_strchr.c\
	ft_strdup.c\
	ft_strjoin.c\
	ft_strlcat.c\
	ft_strlcpy.c\
	ft_strlen.c\
	ft_strmapi.c\
	ft_strncmp.c\
	ft_strnstr.c\
	ft_strrchr.c\
	ft_strtrim.c\
	ft_substr.c\
	ft_tolower.c\
	ft_toupper.c\
	ft_striteri.c\
	get_next_line_utils.c\
	get_next_line.c

BONUS= ft_lstadd_back.c\
	ft_lstadd_front.c\
	ft_lstclear.c\
	ft_lstdelone.c\
	ft_lstiter.c\
	ft_lstlast.c\
	ft_lstmap.c\
	ft_lstnew.c\
	ft_lstsize.c

OBJ = $(SRC:%.c=%.o)
OBJB = $(BONUS:%.c=%.o)

CC      = gcc
CFLAGSS = -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -rf

all: $(NAME)
$(NAME): $(OBJ)
	$(CC) -c $(SRC)
	$(AR) $(NAME) $(OBJ)

B = .
bonus: $(B)
$(B): $(OBJB) $(OBJ)
	$(CC) -c $(BONUS) 
	$(AR) $(NAME) $(OBJB)
fclean:
	@rm -f $(NAME) $(OBJ) $(OBJB)

clean:
	@rm -f $(OBJ) $(OBJBONUS)

re: fclean all

.PHONY: fclean all clean re bonus
