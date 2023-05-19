# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nzhuzhle <nzhuzhle@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/26 18:10:18 by nzhuzhle          #+#    #+#              #
#    Updated: 2023/05/18 18:49:48 by nzhuzhle         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER = ft_printf.h
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_LIBFT = libft/libft.a
MAKE_LIBFT = make -C libft
SRCS = 

INCLUDE = -I ./

OBJ = $(SRCS:.c=.o) 
OBJ_BONUS = $(SRCS_BONUS:.c=.o)	

all: libs $(NAME)

libs:
	$(MAKE_LIBFT)
	
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJ) $(SRC_LIBFT)
	cp $(SRC_LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) a.out
	$(MAKE_LIBFT) clean	

fclean: clean
	rm -f $(NAME) $(SRC_LIBFT)

re: fclean all

.PHONY: all fclean clean re bonus
