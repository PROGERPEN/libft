# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkhrazz <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/21 17:45:04 by fkhrazz           #+#    #+#              #
#    Updated: 2018/12/02 15:50:59 by fkhrazz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SOURCES=  ft_atoi.c ft_isalpha.c ft_bzero.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memccpy.c ft_memcpy.c ft_memset.c ft_memcmp.c ft_strchr.c ft_strcat.c ft_memmove.c ft_strcmp.c ft_strcpy.c ft_strlen.c ft_strlcat.c ft_strdup.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnstr.c ft_tolower.c ft_strstr.c ft_toupper.c ft_strrchr.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_putchar.c ft_putstr.c ft_strsplit.c ft_itoa.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c
OBJECTS= $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

$(OBJECTS): $(SOURCES)
	gcc -c -Wall -Wextra -Werror $(SOURCES)

clean:
	rm -rf $(OBJECTS)

fclean: clean
		rm -rf $(NAME)

re: fclean all
