# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vflorez <vflorez@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/11 12:42:50 by vflorez           #+#    #+#              #
#    Updated: 2023/08/03 14:41:40 by vflorez          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra 

SRC = ft_printf.c\
	ft_putchar.c\
	ft_putstr.c\
	ft_strlen.c\
	ft_pointer.c\
	ft_putnbr.c\
	ft_num_unsig.c\


OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ)
	@ar rcs $(NAME) $(OBJ)

all: $(NAME)

%.o : %.c
	@gcc $(CFLAGS) -c -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re 
