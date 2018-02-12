#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slegros <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/10 05:12:12 by slegros           #+#    #+#              #
#    Updated: 2017/11/29 22:47:20 by slegros          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
	  ft_strncpy.c ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c \
	  ft_strstr.c ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_strnew.c \
	  ft_strdup.c ft_strcpy.c ft_strlen.c ft_memchr.c ft_memcmp.c \
	  ft_atoi.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
	  ft_isprint.c ft_toupper.c ft_tolower.c ft_memalloc.c \
	  ft_memdel.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c \
	  ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c \
	  ft_strjoin.c ft_strtrim.c ft_putchar.c ft_putstr.c ft_putendl.c \
	  ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	  ft_putnbr_fd.c ft_itoa.c ft_strlcat.c ft_strsplit.c ft_lstnew.c \
	  ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c \
	  ft_strichr.c ft_strsubf.c ft_strjoinfree.c ft_isspace.c ft_isneg.c \
	  ft_toabs.c ft_pgcd.c ft_strirchr.c ft_strsplitspc.c get_next_line.c \
	  ft_dbarr_edit.c ft_dbarr_add.c ft_dbarr_del.c ft_dbarrdup.c \
	  ft_dbarrlen.c ft_dbarrprint.c ft_putnbrendl.c ft_putstr_bdr.c \
	  ft_putstr_bdr_fd.c ft_putnbr_bdr.c ft_putnbr_bdr_fd.c ft_putnbrendl.c \

SRCO = $(SRC:.c=.o)

HEADER = libft.h

all: $(NAME)

$(NAME): $(SRCO)
	ar rc $(NAME) $(SRCO)
	ranlib $(NAME)

%.o: %.c
	gcc -Wextra -Werror -Wall -o $@ -c $< -I $(HEADER)

clean:
	rm -rf $(SRCO)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re