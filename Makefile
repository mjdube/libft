# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 11:02:28 by event             #+#    #+#              #
#    Updated: 2019/06/11 15:35:36 by mdube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isspace.c ft_isascii.c ft_memcpy.c ft_putnbr.c ft_strcpy.c ft_strlen.c ft_strnstr.c ft_isdigit.c ft_memdel.c ft_putnbr_fd.c ft_strdel.c ft_strmap.c	ft_strrchr.c ft_isprint.c ft_memmove.c ft_putstr.c ft_strdup.c ft_strmapi.c ft_memset.c	ft_putstr_fd.c ft_strequ.c ft_strncat.c	ft_strstr.c ft_atoi.c ft_memalloc.c ft_putchar.c ft_strcat.c ft_striter.c ft_strncmp.c ft_strsub.c ft_bzero.c ft_memccpy.c ft_putchar_fd.c ft_strchr.c ft_striteri.c ft_strncpy.c ft_strtrim.c ft_isalnum.c	ft_memchr.c	ft_putendl.c ft_strclr.c ft_strjoin.c ft_strnequ.c ft_tolower.c ft_isalpha.c ft_memcmp.c ft_putendl_fd.c ft_strcmp.c ft_strlcat.c ft_strnew.c ft_toupper.c
OBJ = *.o
INC = libft.h

all: $(NAME)
	
$(NAME):
	@gcc -c -I -Wall -Werror -Wextra $(SRC) $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
