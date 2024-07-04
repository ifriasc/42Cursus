# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/27 11:17:20 by ifrias-c          #+#    #+#              #
#    Updated: 2024/07/04 18:25:26 by ifrias-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
CC = gcc
FLAGS = -g -Wall -Werror -Wextra
SRC	= src/main.c \
	src/read_map.c \

SRC_GNL = get_next_line/get_next_line.c \
	
OBJ = $(SRC:%.c=%.o)
OBJ_GNL = $(SRC_GNL:%.c=%.o)
LIBFT = libft/libft.a
FT_PRINTF = ft_printf/libftprintf.a
MLX42 = MLX42/build/libmlx42.a

all: $(NAME)

$(NAME): $(LIBFT) $(FT_PRINTF) $(OBJ) $(OBJ_GNL)
	$(CC) $(OBJ) $(OBJ_GNL) $(MLX42) $(LIBFT) $(FT_PRINTF) -Iinclude -ldl -lglfw -pthread -lm -o $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean: 
	@rm -f $(OBJ) 
	@rm -f $(OBJ_GNL)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re