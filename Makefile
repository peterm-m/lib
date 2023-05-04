NAME := libft.a
DBG := libftdbg.a

SRC_DIR := src
DBG_DIR := dbg

SRCS :=  \
    ftctype/ft_isalnum.c\
    ftctype/ft_isalpha.c\
    ftctype/ft_isascii.c\
    ftctype/ft_isdigit.c\
    ftctype/ft_isprint.c\
    ftctype/ft_tolower.c\
    ftctype/ft_toupper.c\
    ftstring/ft_strchr.c\
    ftstring/ft_strdup.c\
    ftstring/ft_strjoin.c\
    ftstring/ft_strlcat.c\
    ftstring/ft_strlcpy.c\
    ftstring/ft_strlen.c\
    ftstring/ft_strmapi.c\
    ftstring/ft_strncmp.c\
    ftstring/ft_strnstr.c\
    ftstring/ft_strrchr.c\
    ftstring/ft_strtrim.c\
    ftstring/ft_substr.c\
    ftstring/ft_striteri.c\
    ftstring/ft_memchr.c\
    ftstring/ft_memcmp.c\
    ftstring/ft_memcpy.c\
    ftstring/ft_memmove.c\
    ftstring/ft_memset.c\
    ftlib/ft_atoi.c\
    ftlib/ft_bzero.c\
    ftlib/ft_calloc.c\
    ftlib/ft_itoa.c\
    ftlib/ft_split.c\
    ftlib/get_next_line_utils.c\
    ftlib/get_next_line.c \
    ftlist/ft_lstadd.c\
    ftlist/ft_lstclear.c\
    ftlist/ft_lstdelone.c\
    ftlist/ft_lstiter.c\
    ftlist/ft_lstlast.c\
    ftlist/ft_lstmap.c\
    ftlist/ft_lstnew.c\
    ftlist/ft_lstsize.c\
    ftio/ft_putchar_fd.c\
    ftio/ft_putendl_fd.c\
    ftio/ft_putnbr_fd.c\
    ftio/ft_putstr_fd.c
#    ftio/ft_printf.c\
#    ftio/ft_fprintf.c\
#    ftio/ft_sprintf.c\
#    ftio/ft_vprintf.c\
#    ftio/ft_dprintf.c

SRCS := $(SRCS:%=$(SRC_DIR)/%)
SRCDBG := $(SRCS:%=$(DBG_DIR)/%)

BUILD_DIR   := .build

OBJS := $(SRCS:$(SRC_DIR)/%.c=$(BUILD_DIR)/%.o)
OBJDBG := $(SRCDBG:$(DBG_DIR)/%.c=$(BUILD_DIR)/%.o)

DEPS := $(OBJS:.o=.d)
DEPDBG := $(OBJDBG:.o=.d)

CC := gcc
CFLAGS   := -Wall -Wextra -Werror
CPPFLAGS := -MMD -MP -I include
AR := ar
ARFLAGS  := -r -c -s
RM  := rm -f
DIR_DUP = mkdir -p $(@D)

all:

normal: $(NAME)

debug: $(DBG)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $(NAME) $(OBJS)
	$(info CREATED $(NAME))

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.c
	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info CREATED $@)

$(DBG): $(OBJDBG)
	$(AR) $(ARFLAGS) $(DBG) $(OBJDBG)
	$(info CREATED $(DBG))

	$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c -o $@ $<
	$(info CREATED $@)

-include $(DEPS)
-include $(DEPDBG)

clean:
	$(RM) $(OBJS) $(OBDBG) $(OBJDBG) $(DEPS) $(DEPDBG)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
