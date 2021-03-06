# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: coremart <coremart@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/08 11:46:04 by coremart          #+#    #+#              #
#    Updated: 2018/12/08 16:16:17 by aljacque         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = ft_strlen.c \
	   ft_strdup.c \
	   ft_strcpy.c \
	   ft_strncpy.c \
	   ft_strcat.c \
	   ft_strncat.c \
	   ft_strlcat.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strstr.c \
	   ft_strnstr.c \
	   ft_strcmp.c \
	   ft_strncmp.c \
	   ft_atoi.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isalnum.c \
	   ft_isascii.c \
	   ft_isprint.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_memset.c \
	   ft_bzero.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memmove.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memalloc.c \
	   ft_memdel.c \
	   ft_strnew.c \
	   ft_strdel.c \
	   ft_strclr.c \
	   ft_striter.c \
	   ft_striteri.c \
	   ft_strmap.c \
	   ft_strmapi.c \
	   ft_strequ.c \
	   ft_strnequ.c \
	   ft_strsub.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_strsplit.c \
	   ft_itoa.c \
	   ft_putchar.c \
	   ft_putstr.c \
	   ft_putnbr.c \
	   ft_putendl.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putnbr_fd.c \
	   ft_putendl_fd.c \
	   ft_lstnew.c \
	   ft_lstdelone.c \
	   ft_lstdel.c \
	   ft_lstadd.c \
	   ft_lstiter.c \
	   ft_lstmap.c \
	   ft_lstlen.c \
	   ft_lstdup.c \
	   ft_lstprint.c \
	   ft_strdiff.c \
	   ft_strndup.c \
	   ft_min.c \
	   ft_strclen.c \
	   ft_count_digit.c \
	   ft_memdup.c \
	   ft_color.c \
	   ft_realloc.c
OBJ = $(SRCS:.c=.o)
HEADER = libft.h

LOG_CLEAR		=	\033[2K
LOG_UP 			=	\033[A
LOG_NOCOLOR		=	\033[0m
LOG_BLACK		=	\033[1;30m
LOG_RED			=	\033[1;31m
LOG_GREEN		=	\033[1;32m
LOG_YELLOW		=	\033[1;33m
LOG_BLUE		=	\033[1;34m
LOG_VIOLET		=	\033[1;35m
LOG_CYAN		=	\033[1;36m
LOG_WHITE		=	\033[1;37m

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -c $(SRCS) -I $(HEADER)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean:
	@rm -f $(NAME) $(OBJ)

re: fclean all

norm:
	@echo "\n\t$(LOG_RED)██$(LOG_NOCOLOR) please wait...\n"
	@norminette -RCheckForbiddenSourceHeader $(SRCS) | grep -e 'Warning' -e 'Error' -B1 || true
	@echo "\n\t$(LOG_GREEN)██$(LOG_NOCOLOR) norminette finish.\n"

help:
	@echo "\n\t$(LOG_YELLOW)clean$(LOG_NOCOLOR)\t\tCleaning all object"
	@echo "\t$(LOG_YELLOW)fclean$(LOG_NOCOLOR)\t\tCleaning all object and executable"
	@echo "\t$(LOG_YELLOW)norm$(LOG_NOCOLOR)\t\tCheck norminette"
	@echo "\t$(LOG_YELLOW)re$(LOG_NOCOLOR)\t\tDeleting all object and build\n"
