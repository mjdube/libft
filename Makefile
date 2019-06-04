# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: event <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/04 11:02:28 by event             #+#    #+#              #
#    Updated: 2019/06/04 18:17:20 by mdube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = "libft.a"
SRC = *.c
OBJ = *.o
INC = "libft.h"

all: $(NAME)
	
$(NAME):
	gcc -c -Wall -Werror -Wextra $(SRC) $(INC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
