#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccosta <ccosta@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/23 15:15:07 by ccosta            #+#    #+#              #
#    Updated: 2013/12/06 20:13:10 by ccosta           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
TEST = mainlibft.c
TEST_EXE = test
SRC =   ft_memset.c \
		ft_bzero.c \
		ft_memcpy.c \
		ft_memccpy.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_strlen.c \
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
		ft_isdigit.c \
		ft_isupper.c \
		ft_islower.c \
		ft_isalpha.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_atoi.c \
		ft_toupper.c \
		ft_tolower.c \
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
		ft_putendl.c \
		ft_putnbr.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $@ $^
	ranlib $@

test: re
	gcc -L. -lft -o $(TEST_EXE) $(TEST) #rajouter les flags -Werror -Wall -Wextra

%.o: %.c
	gcc -Wall -Wextra -Werror -o $@ -c $<

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f $(TEST:.c=.o)

fclean: clean
	/bin/rm -f $(NAME)
	/bin/rm -f $(TEST_EXE)

re: fclean all

gitadd:
	git add Makefile
	git add auteur
	git add libft.h
	git add mainlibft.c
	git add $(SRC)
	git status

.PHONY: all clean fclean re
