NAME = libftDBG.a

SRC = $(CTYPE) $(STRING) $(LIB) $(LIST) $(IO) $(OBJQUEUE) $(DLIST)
OBJ = $(OBJCTYPE) $(OBJSTRING) $(OBJLIB) $(OBJLIST) $(OBJIO) $(OBJQUEUE) $(OBJDLIST)

CTYPE =	ft_isalnum.c\
	ft_isalpha.c\
	ft_isascii.c\
	ft_isdigit.c\
	ft_isprint.c\
	ft_tolower.c\
	ft_toupper.c
OBJCTYPE = $(CTYPE:%.c=%.o)

STRING = ft_strchr.c\
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
	ft_striteri.c\
	ft_memchr.c\
	ft_memcmp.c\
	ft_memcpy.c\
	ft_memmove.c\
	ft_memset.c
OBJSTRING = $(STRING:%.c=%.o)

LIB = ft_atoi.c\
	ft_bzero.c\
	ft_calloc.c\
	ft_itoa.c\
	ft_split.c\
	get_next_line_utils.c\
	get_next_line.c
OBJLIB = $(LIB:%.c=%.o)

LIST= ft_lstadd.c\
	ft_lstclear.c\
	ft_lstdelone.c\
	ft_lstiter.c\
	ft_lstlast.c\
	ft_lstmap.c\
	ft_lstnew.c\
	ft_lstsize.c
OBJLIST = $(LIST:%.c=%.o)

DLIST =
OBJDLIST = $(DLIST:%.c=%.o)

QUEUE =
OBJQUEUE = $(QUEUE:%.c=%.o)

IO = ft_putchar_fd.c\
	ft_putendl_fd.c\
	ft_putnbr_fd.c\
	ft_putstr_fd.c
#	ft_printf.c\
#	ft_fprintf.c\
#	ft_sprintf.c\
#	ft_vprintf.c\
#	ft_dprintf.c
OBJIO  = $(IO:%.c=%.o)

CC      = gcc
CFLAGSS = -Wall -Wextra -Werror
AR		= ar rcs
RM		= rm -rf

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -c $(SRC)
	$(AR) $(NAME) $(OBJ)

# debug: compilar fsanitize and -DDEBUG

fclean:
	@rm -f $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

re: fclean all

.PHONY: fclean all clean re
