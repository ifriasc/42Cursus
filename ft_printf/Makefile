# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 19:16:02 by ifrias-c          #+#    #+#              #
#    Updated: 2023/12/07 11:50:00 by ifrias-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc
FLAGS = -Wall -Werror -Wextra
SRC	=	ft_printf.c ft_printptr_pf.c ft_printunsigned_pf.c \
		ft_putchar_pf.c ft_putnbr_pf.c ft_putnbrbase_pf.c ft_putstr_pf.c\
		
OBJECTS = $(SRC:%.c=%.o)

$(NAME): $(OBJECTS)
	ar -rcs $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

all: $(NAME)
clean: 
	@rm -f $(OBJECTS) 
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re